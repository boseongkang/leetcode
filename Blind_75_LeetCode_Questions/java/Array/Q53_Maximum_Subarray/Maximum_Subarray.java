class Solution {
    public int maxSubArray(int[] nums) 
    {
        int len = nums.length;
        int result = nums[0];
        int max_num = nums[0];

        for(int i = 1; i < len; ++i)
        {
            max_num = Math.max(max_num + nums[i], nums[i]);
            result = Math.max(max_num, result);

        }
        return result;
        
    }
}
