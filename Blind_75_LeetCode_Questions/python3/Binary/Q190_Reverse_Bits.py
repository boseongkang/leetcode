class Solution:
    def reverseBits(self, n: int) -> int:
        mask = 0xFFFFFFFF
        input = 32
        result = 0

        while 0 < input:
            result = (result << 1) | (n & 1)
            result = result & mask
            n = (n >> 1) & mask
            input = input - 1
        return result

# 1st iteration
# n = 11111111111111111111111111111101
# result => 00 | 1 & 1 => 0 | 1 => 1 
# result = 1 & 0xFFFFFFFF => 1
# n = 0111111111111111111111111111110
# input = 31

# 2nd
# result = 1 << 1 | 0 & 1 => 10 | 0 => 10
# result = 10 & mask => 10
# n = 0011111111111111111111111111111
# input = 30

# 3rd
# result = 10 << 1 | 1 & 1 => 100 | 1 => 101
# result = 101 & mask => 101
# n = 0001111111111111111111111111111
# input = 29

