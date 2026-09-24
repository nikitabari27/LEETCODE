class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count =0;
        for(int i=0; i<flowerbed.size(); i++){
         
          if(flowerbed[i]==0){
            // check left

            bool left= false;
            if(i==0 || flowerbed[i-1] ==0)left= true;

            bool right= false;
            if(i == flowerbed.size()-1 || flowerbed[i+1] ==0 )right= true;

            if(left && right){
            flowerbed[i]=1;
            count++;
             }
          }
        } 
            if(count >= n)return true;
            else{
                return false;
            }
    }
};