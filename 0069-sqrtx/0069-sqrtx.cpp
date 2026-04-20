class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;

        int ans=0;
         
        

        while(s<= e){

            
            int mid = s+(e-s)/2;
            long exp = (long) mid * mid ;

            if(exp == x){
                return mid;
            }

            else if(exp > x){
                 e=mid-1;
            }
            else{
                 ans = mid;
                s=mid+1;
            }
            
        }
        return ans;
    }
};