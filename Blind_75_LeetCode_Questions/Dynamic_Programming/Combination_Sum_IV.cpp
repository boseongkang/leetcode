class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> arr(target + 1, 0);
        arr[0] = 1;

        for(int i = 1; i <= target; ++i)
        {
            for(int num: nums)
            {
                if((i >= num) && (arr[i - num] < INT_MAX - arr[i]))
                    arr[i] = arr[i] + arr[i - num];
            }
        }
        return arr[target];


    }
};
