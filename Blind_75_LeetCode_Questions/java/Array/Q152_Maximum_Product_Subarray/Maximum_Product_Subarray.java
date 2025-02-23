class Solution {
    public int maxProduct(int[] nums) 
    {
        int len = nums.length;
        
        int maxNum = nums[0];
        int minNum = nums[0];
        int result = nums[0];

        for(int i = 1; i < len; ++i)
        {
            int temp = maxNum;

            maxNum = Math.max(nums[i], Math.max(nums[i] * maxNum, nums[i] * minNum));
            minNum = Math.min(nums[i], Math.min(nums[i] * temp, nums[i] * minNum));
            result = Math.max(result, maxNum);
        }
        return result;
        
    }
}
