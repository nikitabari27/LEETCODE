class Solution {
public:

static bool cmp(pair<char, int> a, pair<char,int> b){
    return a.second > b.second;
}
    string frequencySort(string s) {
        
        unordered_map<char, int> mp;

         string ans ="";
//     count freq of string
        for(int i=0; i<s.size(); i++){
            char ch= s[i];
            mp[ch]++;
        }
       //push into vector pair
        vector<pair<char ,int>> v;

         for(auto it: mp){

            v.push_back({it.first, it.second});
         }
         // sort vector by frequency

         sort(v.begin(), v.end(), cmp);

         // append vector into ans

         for(int i=0; i<v.size(); i++){
            ans.append(v[i].second, v[i].first);
         }

       return ans;
    }
};