class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

	//I tried to not use swap function but failed. 
	//Maybe fix it later one day. 
        
        // vector<int> new_arr;
        // int n = nums.size() - 1;
        // int j = 0;
        // int cnt = 0;
        // for(int i = 0; i <= n; i++)
        // {
        //     if(nums[i] % 2 == 0)
        //         new_arr[j++] = nums[i];
        //     else
        //         cnt++;
        // }
        // for(int t = cnt; t <= n; t++)
        // {
        //     new_arr[t] = nums[j++];
        // }
        // return new_arr;

	    int n = nums.size() - 1;
	    int j = 0;
	    for(int i = 0; i <= n; i++)
	    {
	    if(nums[i] % 2 == 0)
    	    swap(nums[i],nums[j++]);
	    }
	    return nums;
    }
};
