class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        result = nums[0]
        max_num = nums[0]
        min_num = nums[0]

        for i in nums[1:]:
           max_temp = max(i, max_num * i, min_num * i)
           min_temp = min(i, max_num * i, min_num * i)
          
           max_num = max_temp
           min_num = min_temp
           
           result = max(result, max_num)
      
        return result

# =====================
# nums =  2  3  -2  4
# result  = 2
# max_num = 2
# min_num = 2

# for i in nums[1:] 1 ~ end 
# max_temp = max(3, 2 * 3, 2 * 3) => 6
# min_tmep = min(3, 2 * 3, 2 * 3) => 6 

# max_num, min_num = 6

# result = max(2, 6) => 6

# -2  0  -1

# res,max,min = -2
# max(0, 0, 0)
