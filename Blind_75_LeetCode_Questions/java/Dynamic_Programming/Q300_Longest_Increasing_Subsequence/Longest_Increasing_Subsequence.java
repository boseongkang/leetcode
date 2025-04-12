class Solution {
    public int lengthOfLIS(int[] nums) 
    {
        int len = nums.length;
        int[] dp = new int[len];
        Arrays.fill(dp, 1);

        for(int current = 1; current < len; ++current)
        {
            for(int prev = 0; prev < current; ++prev)
            {
                if(nums[prev] < nums[current])
                    dp[current] = Math.max(dp[current], dp[prev] + 1);
            }
        }
        int max = 0;
        for(int i = 0; i < len; ++i)
        {
            if(dp[i] > max)
                max = dp[i];
        }
        return max;
    }
}
