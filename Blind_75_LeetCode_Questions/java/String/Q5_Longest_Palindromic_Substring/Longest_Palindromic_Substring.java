class Solution {
    public String longestPalindrome(String s) 
    {
        int len = s.length();
        boolean[][] dp = new boolean[len][len];

        for(boolean[] temp : dp)
        {
            Arrays.fill(temp, true);
        }

        int start = 0;
        int maxLen = 1;

        for(int i = len - 2; i >= 0; --i)
        {
            for(int j = i + 1; j < len; ++j)
            {
                dp[i][j] = false;
                if(s.charAt(i) == s.charAt(j))
                {
                    dp[i][j] = dp[i + 1][j - 1];
                    if(dp[i][j] && (maxLen < j - i + 1))
                    {
                        maxLen = j - i + 1;
                        start = i;
                    }
                }
            }
        }
        return s.substring(start, start + maxLen);
        
    }
}
