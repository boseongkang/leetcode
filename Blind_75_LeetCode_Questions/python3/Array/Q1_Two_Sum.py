class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        cnt = 0
        for i in nums:
            tmp = target - i
            if tmp in dict:
                return [dict[tmp], cnt]
            dict[i] = cnt
            cnt += 1
        
