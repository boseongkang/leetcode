class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_num = -sys.maxsize -1
        sum = 0

        for i in nums:
            sum += i
            max_num = max(sum, max_num)

            if(sum < 0):
                sum = 0
        return max_num
