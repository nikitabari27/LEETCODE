class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        if(ransomNote.size() > magazine.size())return false;

        int arr1[26];

        for(int i=0; i<ransomNote.size(); i++){

            arr1[ransomNote[i] - 'a']++;
        }
        int arr2[26];

        for(int i=0; i<magazine.size(); i++){

            arr2[magazine[i] - 'a']++;
        }

        for(int i=0; i<26; i++){
            
            if(arr1[i] > arr2[i])return false;
        }
       
         return true;
    }
};