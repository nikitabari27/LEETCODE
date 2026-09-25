class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n= gain.size();
        int arr[n+1];

        int maxi = INT_MIN;

        arr[0] =0;
       // arr[1] = gain[0];

        for(int i=1; i<n+1; i++){

            arr[i] =  arr[i-1] + gain[i-1];
        }
        
        for(int i=0; i<n+1; i++ ){

            maxi= max(maxi, arr[i]);
        }
        return maxi;
    }
};