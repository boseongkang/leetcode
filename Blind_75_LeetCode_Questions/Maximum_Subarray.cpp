class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        int max_num = INT_MIN;
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            result = result + nums[i];
            max_num = max(max_num,result);
            
            if(result < 0)
                result = 0;
        }
        return max_num;
        
    }
};
