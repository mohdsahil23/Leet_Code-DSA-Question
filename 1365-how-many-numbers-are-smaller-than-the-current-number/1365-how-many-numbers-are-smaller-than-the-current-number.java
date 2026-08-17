class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
         int[] ans = new int[nums.length];
        for(int i =0; i< nums.length; i++){
         int   k = 0;
            for(int j = 0; j<nums.length; j++){
                if(nums[i]>nums[j]){
                    k++;
                }
            }
              ans[i]=k;
        }
  
        return ans;
    }
}