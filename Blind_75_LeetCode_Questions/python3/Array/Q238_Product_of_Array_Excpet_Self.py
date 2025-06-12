class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        list_len = len(nums)
        new_list = [1] * list_len
        
        left = 1
        for i in range(list_len):
            new_list[i] = left
            left = left * nums[i]

        right = 1
        for i in range(list_len -1, -1, -1):
            new_list[i] = new_list[i] * right
            right = right * nums[i]
        
        return new_list
