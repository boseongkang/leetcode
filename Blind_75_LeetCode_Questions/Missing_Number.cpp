class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for(int i = 0; i < len; i++)
        {
            if(cnt == nums[i])
                cnt++;
            else
                break;
        }
        return cnt;
    }
};
