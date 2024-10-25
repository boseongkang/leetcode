class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {   
        unordered_map<char, int> charMap;
        int maxLength = 0;
        int start = 0;
        int len = s.length();
        int i = 0; 
        
        while(i < len)
        {
            if((charMap.find(s[i]) != charMap.end()) && (charMap[s[i]] >= start))
                start = charMap[s[i]] + 1;
        
        charMap[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
        i++;
        }
        return maxLength;
    }
};
