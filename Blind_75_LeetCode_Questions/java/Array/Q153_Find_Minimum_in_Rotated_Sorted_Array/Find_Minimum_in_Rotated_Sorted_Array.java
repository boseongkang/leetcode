class Solution {
    public int findMin(int[] nums) 
    {
        int len = nums.length;
        int val = nums[0];

        for(int i = 1; i < len; ++i)
        {
            if(nums[i] < val)
                val = nums[i];            
        }
        return val;
        
    }
}
