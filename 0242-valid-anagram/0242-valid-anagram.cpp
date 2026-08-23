class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!= t.length()){
            return false;
        }
        
     unordered_map<char, int>mp;

     for(int i=0; i<s.size(); i++){
          char ch = s[i];
          mp[ch]++;
     }

     unordered_map<char, int>mp1;

     for(int i=0; i<t.size(); i++){
          char ch = t[i];
          mp1[ch]++;
     }
    for(int i=0; i<mp.size(); i++){
      if(mp[i]!=mp1[i])return false;

     
     }
     return true;
    }
};