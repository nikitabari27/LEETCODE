class Solution { 
public:

  bool checkEqual (int count1[26], int count2[26]){

    for(int i=0; i<26; i++){

        if(count1[i] != count2[i]){
            return false;
        }
       
    }
     return true;
}

    bool checkInclusion(string s1, string s2) {
    
        // s1 ke liye ek count arr bnaya jisme apan har char count store kr lege

        int count1[26]= {0};

        for(int i=0; i<s1.size(); i++){
            int index= s1[i]-'a';
            count1[index]++;
        }
        
        // s2 ke liye bhi ek count arr bnayege
        int count2[26] ={0};

        // Ab apan s2 pr s1 len ki window chalyege
        // first window

        int i=0; // traverse ke liye pointer s2 pr

        int windowSize = s1.length();

        while(i< windowSize && i<s2.length()){

            int index= s2[i]-'a';
            count2[index]++;
            i++;
         }
        // if count1 aur count2 arr same aa gye to return true
         if(checkEqual(count1, count2)){
            return true;
         }

         // agr first window se same nhi aaya then process remaining window

         while(i< s2.length()){

         // new char jo add hua uska cout add ho gya 
            int index = s2[i] -'a';
            count2[index]++;

            // jo remove hua char window se usko count bhi decrement krna pdega
            // kyu ki tbhi checkEqual fxn kbhi true ho payega
            
            // remove old char count from arr
             index= s2[i-windowSize]- 'a';
             count2[index]--;

            i++;

            if(checkEqual(count1, count2)){
            return true;
          }

         }
         return false;

    }
};