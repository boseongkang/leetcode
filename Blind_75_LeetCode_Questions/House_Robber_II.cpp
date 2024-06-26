class Solution {
public:
    int rob_func(vector<int>& nums, int start, int last) 
    {
        int first = 0;
        int second = 0;
        int temp = 0;

        for(int i =  start; i <= last; ++i)
        {
            temp = max(first + nums[i], second);
            first = second;
            second = temp;
        }
        return temp;
    }

    int rob(vector<int>& nums)
    {
        int cnt = nums.size();
        if (cnt == 1) return nums[0];
        if (cnt == 2) return max(nums[0], nums[1]);

        return max(rob_func(nums, 1, cnt - 1), rob_func(nums, 0, cnt - 2));
    }
};
