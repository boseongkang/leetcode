class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {

       sort(nums.begin(),nums.end());
        // int i = 0;
        // while (i < nums.size()-1)
        // {
        //     if(nums[i] == nums[i+1])
        //         return true;
        //     i++;
        // }
        for(int i = 0; i< nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};
// changed nested for loop -> sort();
// while loop runtime : 235ms
// for loop runtime : 104ms

