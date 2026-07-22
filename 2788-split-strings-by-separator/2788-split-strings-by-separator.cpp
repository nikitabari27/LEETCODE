class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        

        vector<string> ans;

        for(int i=0; i<words.size(); i++){

            string sub="";
          for(char ch : words[i]){
          
            if(ch != separator){
                sub.push_back(ch);
            }
            else{

                if(!sub.empty()){
                    ans.push_back(sub);
                    sub.clear();
                }
            }
        }
        if(!sub.empty()){
             ans.push_back(sub);
         }
     }
         
         return ans;
        
    }
};