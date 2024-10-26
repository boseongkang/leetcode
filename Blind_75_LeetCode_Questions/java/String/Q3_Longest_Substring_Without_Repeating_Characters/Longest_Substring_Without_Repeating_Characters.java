class Solution {
    public int lengthOfLongestSubstring(String s) 
    {
        HashMap<Character, Integer> hashmap = new HashMap<>();
        int maxLength = 0;
        int start = 0;
        int len = s.length();
        int i = 0;

        while(i < len)
        {
            char track_char = s.charAt(i);
            if(hashmap.containsKey(track_char) && hashmap.get(track_char) >= start)
                start = hashmap.get(track_char) + 1;
            
            hashmap.put(track_char,i);
            maxLength = Math.max(maxLength, i - start + 1);
            i++;
        }
        return maxLength;
        
    }
}
