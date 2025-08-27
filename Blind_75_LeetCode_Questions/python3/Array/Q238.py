class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        tmp = [1] * n

        prefix = 1
        for i in range(n):
            tmp[i] = tmp[i] * prefix
            prefix = prefix * nums[i]
        
        suffix = 1
        for i in range(n-1, -1 ,-1):
            tmp[i] = tmp[i] * suffix
            suffix = suffix * nums[i]
        return tmp
