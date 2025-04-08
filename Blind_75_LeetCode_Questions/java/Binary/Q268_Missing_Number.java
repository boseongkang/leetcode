class Solution {
    public int missingNumber(int[] nums) 
    {
        int len = nums.length;
        
        for(int num = 0; num <= len; ++num)
        {
            boolean find = false;

            for(int index = 0; index < len; ++index)
            {
                if(nums[index] == num)
                {
                    find = true;
                    break;
                }
            }

            if(find == false)
                return num;
        }
        return 0;
    }
}
