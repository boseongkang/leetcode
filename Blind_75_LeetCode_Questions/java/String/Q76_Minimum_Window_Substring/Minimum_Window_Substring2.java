class Solution {
    public String minWindow(String s, String t) 
    {
        int slen = s.length();
        int tlen = t.length();

        if (s == null || t == null || slen < tlen)
            return "";

        HashMap<Character, Integer> hashmap = new HashMap<>();
        for (char c : t.toCharArray()) 
        {
            if (hashmap.containsKey(c))
                hashmap.put(c, hashmap.get(c) + 1);
            else
                hashmap.put(c, 1);
        }

        int left = 0;
        int right = 0;
        int minLen = Integer.MAX_VALUE;
        int minStart = 0;
        int cnt = hashmap.size();

        while (right < slen) 
        {
            char c = s.charAt(right);
            if (hashmap.containsKey(c)) 
            {
                hashmap.put(c, hashmap.get(c) - 1);
                if (hashmap.get(c) == 0) 
                    cnt--;
            }
            right++;

            while (cnt == 0) 
            {
                if (right - left < minLen) 
                {
                    minLen = right - left;
                    minStart = left;
                }

                char leftChar = s.charAt(left);
                if (hashmap.containsKey(leftChar)) 
                {
                    hashmap.put(leftChar, hashmap.get(leftChar) + 1);
                    if (hashmap.get(leftChar) > 0)
                        cnt++;
                }
                left++;
            }
        }
        return minLen == Integer.MAX_VALUE ? "" : s.substring(minStart, minStart + minLen);
    }
}

