class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int min_capacity=0;   // max of weight
        int max_capacity=0;   // sum of weight

        for(int i=0; i<weights.size(); i++){

            if(weights[i] > min_capacity){
                min_capacity = weights[i];
            }

            max_capacity += weights[i];
        }
        //Binary serach
      

         while(min_capacity < max_capacity){

          int mid = min_capacity+(max_capacity- min_capacity)/2;

            int D =1;
            int sum=0;
            for(int i=0; i<weights.size(); i++){

               if(sum + weights[i] > mid){
                D++;
                sum=0;
               }

               sum += weights[i];

            }
            if(D > days){
                min_capacity = mid+1;
            }
            else{
                max_capacity = mid;
            }
         }
         return min_capacity;
    }
};