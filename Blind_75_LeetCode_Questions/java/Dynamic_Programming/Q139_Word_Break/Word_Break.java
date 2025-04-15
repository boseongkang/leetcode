class Solution {
    public boolean wordBreak(String s, List<String> wordDict) 
    {
        int len = s.length();
        boolean[] tmp = new boolean[len + 1];
        tmp[0] = true; 
        
        for(int i = 1; i <= len; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(tmp[j] && wordDict.contains(s.substring(j, i)))
                {
                    tmp[i] = true;
                    break;
                }
            }
        }
        return tmp[len];
    }
}
