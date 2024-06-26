class Solution {
public:
    int rob(const vector<int>& nums) 
    {
        int first = 0;
        int second = 0;
        int temp = 0;

        for(int num: nums)
        {
            temp = max(first, second);
            first = second + num;
            second = temp;
        }
        return max(first, second);
    }

    int result(vector<int>& nums)
    {
        int cnt = nums.size();
        if(cnt == 1)
            return nums[0];
        if(cnt == 2)
            return max(nums[0], nums[1]);
        
        vector<int>adjacent_first(nums.begin() + 1, nums.end());
        vector<int>adjacent_last(nums.begin(), nums.end() - 1);

        
    }

};


