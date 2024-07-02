class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int first = 0;
        int second = 0;
        int temp = 0;

        for(int num: nums)
        {
            temp = max(first, second);
            first = second + num;
            second = temp;
        }
        
        return max(first, second);
        
    }
};
