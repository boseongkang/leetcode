class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        unordered_map<char, int> charMap;
        int len = s.length();
        int i = 0;
        int start = 0;
        int maxLength = 0;
        int maxCnt = 0;

        while(i < len)
        {
            charMap[s[i]]++;
            maxCnt = max(maxCnt, charMap[s[i]]);

            if((i - start + 1) - maxCnt > k)
            {
                charMap[s[start]]--;
                start++;
            }
            maxLength = max(maxLength, i - start + 1);
            i++;
        }
        return maxLength;
        
    }
};
