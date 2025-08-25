class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        tmp = set()
        for i in nums:
            if i in tmp:
                return True
            else:
                tmp.add(i)
        return False
