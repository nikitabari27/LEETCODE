class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size() != word2.size())return false;

        int arr1[26];
        int arr2[26];

        for(int i=0; i< word1.size(); i++){

            arr1[word1[i]- 'a']++;
            arr2[word2[i]- 'a']++;
        }

        // check for unique char

        for(int i=0; i<26; i++){

            if((arr1[i]==0 && arr2[i] != 0) ||(arr2[i]==0 && arr1[i] != 0)) return false;
        }

        // check for unique freq

        sort(arr1, arr1+26);
        sort(arr2, arr2+26);

       for(int i=0; i<26; i++){
         if(arr1[i] != arr2[i])return false;
        
       }
        return true;
    }
};