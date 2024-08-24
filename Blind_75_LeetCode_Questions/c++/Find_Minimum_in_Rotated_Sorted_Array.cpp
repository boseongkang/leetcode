class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int head = 0; 
        int mid = 0;
        int tail = nums.size() - 1;
        while(head < tail)
        {
            mid = (head + tail) / 2;
            if(nums[mid] > nums[tail])
                head = mid + 1;
            else 
                tail = mid;
        }
        return nums[head];

    }
};
