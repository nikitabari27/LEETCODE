class Solution {
public:
    string reversePrefix(string word, char ch) {

        stack<char>str;
        int index =-1;
 
// sbse pehle we will find the index jha tk hme reverse krna h
        for(int i=0; i<word.size(); i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }
        // fir string ko stack m push kiya
        // Jo index value mili thi wha tk hi push kiya
        for(int i=0; i<=index; i++){
            str.push(word[i]);
        }
        string ans =""; 

       // fir stack se reverse kr diya
        while(!str.empty()){
            ans += str.top();
            str.pop();
    }
    // Ab sting ans m apne pss sirf reverse kri string pdi h
    // isliye ab apan bachi hui string ans m add krege

    for(int i=index+1; i<word.size(); i++){
        ans += word[i];
      }
      return ans;
    }
};