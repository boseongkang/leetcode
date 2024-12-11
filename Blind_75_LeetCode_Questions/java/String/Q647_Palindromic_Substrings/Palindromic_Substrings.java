class Solution {
    public int countSubstrings(String s) 
    {
        int len = s.length();
        boolean[][] dp = new boolean[len][len];

        for(boolean[] temp : dp)
        {
            Arrays.fill(temp, false);
        }

        int cnt = 0;

          for (int l = 1; l <= len; ++l) 
          {
            for (int i = 0; i <= len - l; ++i) 
            {
                int j = i + l - 1; 

                if (s.charAt(i) == s.charAt(j)) 
                {
                    if (l <= 2) 
                        dp[i][j] = true;
                    else
                        dp[i][j] = dp[i + 1][j - 1];
                    if (dp[i][j] == true)
                        cnt++;
                    
                }
            }
        }

        return cnt;
    }
}
