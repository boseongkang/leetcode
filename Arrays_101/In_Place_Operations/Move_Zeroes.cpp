class Solution {
public:
    void moveZeroes(vector<int>& nums) {
 	// tried to solve as my way but code didn't work         
        // int n = nums.size() - 1;
        // int cnt = nums.size()-1;
        // for(int i = n; i >= 0; i--)
        // {
        //     if(nums[i] != 0)
        //         nums[i-1] = nums[i];
        //     else
        //     {
        //         nums[cnt] = nums[i];
        //         cnt--;
        //     }
        // }
        

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != 0) 
                nums[cnt++] = nums[i];
        }
        for (int i = cnt; i < nums.size(); i++)
        {
            nums[i] = 0;
        }   
    }
};
