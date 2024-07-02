class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n = nums.size();
        int cnt = 0;
        vector<int> arr(n, 0);
        arr[0] = nums[0];
        
        for(int i = 1; i < n; ++i)
        {
            if(i > arr[i-1])
                return false;
            arr[i] = max(arr[i-1], i + nums[i]); 
            if(arr[i] >= n - 1)
                return true;
        }
        return arr[n-1] >= n - 1;
        
    }
};
