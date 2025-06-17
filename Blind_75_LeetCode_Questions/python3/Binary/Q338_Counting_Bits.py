class Solution:
    def countBits(self, n: int) -> List[int]:
        result = []

        while 0 <= n: # n = 5 => 0 1 0 1
            cnt = 0
            num = n # num = 5
            while 0 < num:
                if num & 1:
                    cnt += 1
                num = num >> 1
            result.append(cnt)
            n -= 1
        result.reverse()
        return result



# 0 <= i <= n 
# n = > 2 
# i = 0, 1, 2

# return array 

# n  = 5 
# 0   0000    0
# 1   0001    1
# 2   0010    1
# 3   0011    2
# 4   0100    1
# 5   0101    2

# 0   1   1   2   1   2
