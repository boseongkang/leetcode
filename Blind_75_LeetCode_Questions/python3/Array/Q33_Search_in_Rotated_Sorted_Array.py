class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = (left + right) // 2
            
            if nums[mid] == target: #base case
                return mid

            if nums[left] <= nums[mid]:
                if nums[left] <= target < nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1

            else:
                if nums[mid] < target <= nums[right]:
                    left = mid + 1
                else: 
                    right = mid - 1
        return -1


# ==========================
#            mid        right
# 4   5   6   7   0   1   2
# cnt = 0 left = 0 right = 6
# while 0 < 6
# mid = 3 
# elif nums[left] < nums[mid] 
#         4 < 7 (o)
#     if nums[left] <= target < nums[mid]
#             4 <= 0 < 7 x 
#         left = mid + 1 => left = 4
# while left < right 
#         4 < 6 o
# mid = 5
#                    mid
# 4   5   6   7   0   1   2
# elif 0 < 1 o 
# if 0 <= 0 < 1 => right = mid -1 => right = 4

# left = 4 right = 4
# mid = 4
# return mid => return 4

#line 18
#elif nums[mid] < nums[right]: -> Time Limit Exceeded error
#else (o) -> wrong answer 170/196 pass 
