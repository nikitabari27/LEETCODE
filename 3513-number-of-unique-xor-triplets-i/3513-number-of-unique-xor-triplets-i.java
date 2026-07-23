class Solution {
    public int uniqueXorTriplets(int[] nums) {
        int n = nums.length;
        if(n==1 || n==2) return n;
        int highest = Integer.highestOneBit(n);
        return highest<<1;
    }
}