class Solution:
    def findMin(self, nums: List[int]) -> int:
        left = 0
        right = len(nums) - 1

        while left < right:
            mid = (left + right) // 2
            if nums[mid] < nums[right]:
                right = mid
            elif nums[mid] > nums[right]:
                left = mid + 1


        return nums[left]

    

# =====================
#        mid  > right
# 3   4   5   1   2
# left = 0    right = 4 
# while 0 < 2 
# mid = 2
# left(0) < mid(2) < right(4)
# left < mid:

# left = 0 right = 6
#            mid        right
# 4   5   6   7   0   1   2
# mid = 3
# mid > right => 7 > 2
# left = mid + 1, left = 4 
# while left(4) < right(2) x
# -> return nums[left] nums[4] => 0 minimum

