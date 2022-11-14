class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
       for(int i = 0; i < nums.size(); i++)
       {
           for(int j = i+ 1; j < nums.size(); j++)
           {
               if(nums[i] == nums[j])
                   return true;
           }
       }
        return false;
        
    }
};
Status : TIme Limit Exceeded. Tried not to use sort function, which makes O(n^2). Search more code.. 
