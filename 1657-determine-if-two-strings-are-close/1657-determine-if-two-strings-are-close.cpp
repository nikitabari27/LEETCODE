class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size() != word2.size())return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(int i=0; i<word1.size(); i++){

            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }

        // isse char match kiye dono mp m ki same h kya

        for(auto it: mp1){

            if(!mp2.contains(it.first))return false;
        }

        // now match freq

        vector<int> freq1;
        vector<int> freq2;

        for(auto it: mp1){
            freq1.push_back(it.second);
        }
         for(auto it: mp2){
            freq2.push_back(it.second);
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        if(freq1!=freq2)return false;


        
       return true;
    }
};