class Solution {
public:
vector<int> prevSmaller(vector<int>& heights){

    stack<int>s;

    s.push(-1);

    vector<int>ans(heights.size());

    for(int i=0; i<heights.size(); i++){
        int curr = heights[i];

        while(s.top() != -1 && heights[s.top()] >= curr){
            s.pop();
        }
        ans[i]= s.top();

        s.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int>& heights){

    stack<int>s;

    s.push(-1);

    vector<int>ans(heights.size());

    for(int i=heights.size()-1; i>=0; i--){
        int curr = heights[i];

        while(s.top() != -1 && heights[s.top()] >= curr){
            s.pop();
        }
        ans[i]= s.top();

        s.push(i);
    }
    return ans;
}
    int largestRectangleArea(vector<int>& heights) {
        
        // prevsmaller
        vector<int>prev = prevSmaller(heights);

        // nextsmaller
        vector<int>next = nextSmaller(heights);

        int maxArea= INT_MIN;

        int size= heights.size();

         for(int i=0; i<heights.size(); i++){
            int length = heights[i];

            if(next[i]==-1){
                next[i] = size;
            }
            int width= next[i] -prev[i] -1;

            int area = length * width;
             maxArea = max(area, maxArea);
         }
           return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
         // kyuki yha vector type char aur apna upar ka code int m h to isse change kr lege
        vector<vector<int>> v;
        int n= matrix.size();
        int m= matrix[0].size();

        for(int i=0; i<n; i++){
            vector<int>t;
            for(int j=0; j<m; j++){
                t.push_back(matrix[i][j] - '0');
            }
            v.push_back(t);
        }
        // first row
        int area =  largestRectangleArea(v[0]);
         
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
              
              // update curr row with prev row
              if(v[i][j]){
                v[i][j] += v[i-1][j];
              }
              else{
                v[i][j] =0;
              }
            }
            area =max(area, largestRectangleArea(v[i]));
        }
        return area;
    }
};