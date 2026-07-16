class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i= 0;
        int j= 0;

        while(i <g.size() && j<s.size()){

        if(s[j] >= g[i]){
            // yha pe dono satisfied h
            i++;
            j++;
        }
        else{
           // cookie is too small and because we have sorted the arr aage badi value hi hoge;
            j++;
        }
     }
        return i;
    }
};