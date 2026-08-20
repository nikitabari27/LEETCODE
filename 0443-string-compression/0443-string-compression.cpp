class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i=0;  //trversing

        // kyuki return length krni h isliye
        int ansLength =0;

        while(i< chars.size()){

            int j= i+1;

            while(j<chars.size() && chars[i]==chars[j]){
                j++;
            }
            // is while loop se bahar tbhi aaye ge yha to string khatam ho gyi ho yha
            //  old char ke sare count mil gye

            int count= j-i;

            // pehle char stor kra lo aur fir ansLength ko aage bda do
            chars[ansLength]= chars[i];
            ansLength++;
            
            if(count >1){
            //count ko convert kr lo string m
              string cnt =to_string(count);

              for(char ch: cnt){
                // store count in ansLength
                chars[ansLength]=ch;
                ansLength++;
               }
            }
            //for next char
            i=j;
        }
        return ansLength;
    }
};