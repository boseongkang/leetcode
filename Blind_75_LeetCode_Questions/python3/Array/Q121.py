class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_index = 0
        max_num = 0

        for i in range(1, len(prices)):
            temp = prices[i] - prices[min_index]
            if max_num < temp:
                max_num = temp
            if prices[i] < prices[min_index]:
                min_index = i

        return max_num
