class Solution:
    def hammingWeight(self, n: int) -> int:
        cnt = 0

        while 0 < n:
            if n & 1 == 1:
                cnt += 1
            n = n >> 1
        return cnt

# 11 -> 1011
#          &
#          1  -> o 
#          cnt +1
# n = n >> 1
#        -> 1
# n = 1011
# n = 0101 


