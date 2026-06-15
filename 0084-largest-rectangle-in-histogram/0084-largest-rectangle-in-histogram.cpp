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
};