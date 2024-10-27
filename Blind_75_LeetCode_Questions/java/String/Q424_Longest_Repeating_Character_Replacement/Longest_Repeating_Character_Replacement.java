class Solution {
    public int characterReplacement(String s, int k) 
    {
        int[] letterCnt = new int[26];
        int start = 0;
        int end = 0;
        int maxCnt = 0;
        int len = s.length();

        while(end < len)
        {
            char currentChar = s.charAt(end);
            letterCnt[currentChar - 'A']++;
            maxCnt = Math.max(maxCnt, letterCnt[currentChar - 'A']);
            
            if(end - start + 1 - maxCnt > k)
            {
                letterCnt[s.charAt(start) - 'A']--;
                start++;
            }
            end++;
        }
        return end - start;
    }
}
