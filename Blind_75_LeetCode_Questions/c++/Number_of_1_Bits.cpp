class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int cnt = 0;
        while(n != 0)
        {
            n = n & (n - 1);
            cnt++;
        }
        return cnt;
        // unsigned int sz = 1 << 16;
        // unsigned int N = n.size();
        // unsigned int memo[sz];
        // memo[0] = 0;

        // for(int i = 1; i < sz; i++)
        //     memo[i] = memo[i >> 1] + (i & 1);
        // unsigned int totalSetBits = 0;
        // unsigned int bitMask = sz - 1;
        // for(int i = 0; i < N; i++)
        // {
        //     totalSetBits = totalSetBits + memo[s[i] & bitMask];
        //     s[i] = s[i] >> 16;
        //     totalSetBits = totalSetBits + memo[s[i] & bitMask];
        // }
        // return totalSetBits;
    }
};
