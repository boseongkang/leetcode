class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)       # let n = 3
        for i in range(0,n): # 0 ~ 3 0, 1, 2 
            if i != nums[i]: # 0 == nums[0]
                return i
        return n
