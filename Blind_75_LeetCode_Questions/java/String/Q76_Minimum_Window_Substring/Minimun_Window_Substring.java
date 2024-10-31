class Solution {
    public String minWindow(String s, String t) 
    {
        // ascii character codes 0~127 = 128 
        int[] charT = new int[128]; // store the frequency of each character in t
        int[] charWindow = new int[128]; // tracks the frequency of characters in the current window of s

        int slen = s.length();
        int tlen = t.length();

        for(int i = 0; i < tlen; ++i)
        {
            charT[t.charAt(i)]++; // put letters from t into charT 
        }

        int matchCnt = 0;
        int windowStart = 0;
        int minWindowStart = -1;
        int minLen = Integer.MAX_VALUE; //set to maximum value so that if one value is stored, it will be min 

        for(int windowEnd = 0; windowEnd < slen; ++windowEnd)
        {
            charWindow[s.charAt(windowEnd)]++;
            if(charT[s.charAt(windowEnd)] >= charWindow[s.charAt(windowEnd)])
                matchCnt++;

            while(matchCnt == tlen)
            {
                int windowLen  = windowEnd - windowStart + 1;

                if(windowLen < minLen)
                {
                    minLen = windowLen;
                    minWindowStart = windowStart;
                }
                char charAtStart = s.charAt(windowStart);
                if(charT[charAtStart] >= charWindow[charAtStart])
                    matchCnt--;
                
                charWindow[charAtStart]--;
                windowStart++;
            }
        }
        return minWindowStart < 0 ? "" : s.substring(minWindowStart, minWindowStart + minLen);
    }
}
