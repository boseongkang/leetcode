class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int len = 32;

        if (n == 0) return 0;
        for (int i = 0; i < len; i++)
        {
            result = result << 1;
            if(n & 1 == 1)
                result = result + 1;
        n = n >> 1;
        }
        return result;
    }
};
