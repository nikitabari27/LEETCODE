class Solution {
public:

void merge(vector<int>& nums, int temp [], int low, int mid, int high){

    int i=low;
    int j=mid+1;
    int k = low;

   
    while(i <= mid && j<= high){

        if(nums[i] < nums[j]){
            temp[k++] = nums[i++];
        }
        else{
            temp[k++] = nums[j++];
        }
    }

    while(i <= mid){
        temp[k++] = nums[i++];
    }

    while(j <= high){
         temp[k++] = nums[j++];
    }

    // copy temp back to nums
    for(int k=low; k<=high; k++){
        nums[k]= temp[k];
    }


}

void mergeSort(vector<int>& nums, int temp[], int low, int high){

    if(low >= high)return;

    int mid= low+(high-low)/2;

    // left part
    mergeSort(nums, temp, low, mid);

    //right part
    mergeSort(nums, temp, mid+1, high);

    // now merge the arrays
    merge(nums, temp, low, mid, high);
}
    vector<int> sortArray(vector<int>& nums) {

         int temp[nums.size()] ;

        
        // merge sort

        mergeSort(nums,temp, 0, nums.size()-1);



        return nums;
    }
};