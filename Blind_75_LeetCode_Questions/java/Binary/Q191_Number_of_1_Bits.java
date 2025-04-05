class Solution {
    public int hammingWeight(int n) 
    {
        int cnt = 0;

        while(0 < n)
        {
            if((n % 2) == 1)
                cnt++;
            n /= 2;

        }
        return cnt;
    }
}
