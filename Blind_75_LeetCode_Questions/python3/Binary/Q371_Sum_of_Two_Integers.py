class Solution:
    def getSum(self, a: int, b: int) -> int:
        mask = 0xFFFFFFFF
        max_int = 0x7FFFFFFF

        while b != 0:
            one_up = (a & b) << 1
            a = (a ^ b) & mask
            b = one_up & mask
        
        if a <= max_int:
            return a
        else:
            return ~(a ^ mask)

