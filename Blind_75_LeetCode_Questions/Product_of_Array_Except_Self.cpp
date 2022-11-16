class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> result(n);
        vector<int> temp_arr(n);
        vector<int> temp(n);
        for(int i = 0; i < nums.size(); i++)
        {
            temp_arr[i] = 1;
            if(temp_arr[i] == nums[i])
            {
               temp[i] = nums[i+1] * nums[i+2]; 
            }
            else 
            {
                temp[i] = nums[i] * nums[i+1];
                result[i] = temp_arr[i+1] * nums[i];
    
            }
        }
        return result;
    }
};
// ERROR
// Tried to make switch case with if statement, but getting worse.
// Fix tomorrow.
