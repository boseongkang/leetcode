class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int len = nums.size() - 1;
        int cnt = 0;
        int i = 0;
        int min = 0;
        // while(len > 0)
        // {
        //     if(nums[i] > nums[i+1])
        //         i++;
        //     else //if(nums[i] < nums[i+1])
        //     {
        //         min = num[i];
        //         if(nums[i] )
        //         cnt++;
        //         i++;
        //     }
        //     len--;
        // }
        // return cnt;
        
        vector<int> dp;
        
        dp.push_back(nums[0]);

        while(i <= len)
        {
            if(dp[dp.size() - 1] < nums[i])
                dp.push_back(nums[i]);
            else
            {
                int temp = lower_bound(dp.begin() , dp.end() , nums[i]) - dp.begin();
                dp[temp] = nums[i];
                i++;
            }
        }
        return dp.size();
    }

        
};
