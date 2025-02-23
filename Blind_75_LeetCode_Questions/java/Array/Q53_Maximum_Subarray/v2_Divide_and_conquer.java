class Solution {
    public int maxSubArray(int[] nums)
    {
        return maxCalculator(nums, 0, nums.length - 1);
    } 

    public int maxCalculator(int[] nums, int low, int high)
    {
        if(low > high)
            return Integer.MIN_VALUE;
        if(low == high)
            return nums[low];
        
        int mid = (low + high) / 2;

        int left_max = maxCalculator(nums, low, mid);
        int right_max = maxCalculator(nums, mid + 1, high);
        int mid_max = maxMidCalculator(nums, low, mid, high);

        return Math.max(left_max, Math.max(right_max, mid_max));
    }

    public int maxMidCalculator(int[] nums, int low, int mid, int high)
    {
        int leftSum = Integer.MIN_VALUE;
        int sum = 0;
        
        for(int i = mid; low <= i; --i)
        {
            sum = sum + nums[i];
            leftSum = Math.max(leftSum, sum);
        }

        int rightSum = Integer.MIN_VALUE;
        sum = 0;
        for(int i = mid + 1; i <= high; ++i)
        {
            sum = sum + nums[i];
            rightSum = Math.max(rightSum, sum);
        }
        return leftSum + rightSum;
    }
}
