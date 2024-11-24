class Solution {
    public boolean isAnagram(String s, String t) 
    {
        int slen = s.length();
        int tlen = t.length();

        char[] dict = new char[slen];

        for(int i = 0; i < slen; ++i)
        {
            dict[i] = s.charAt(i);
        }

        char[] checker = new char[tlen];
        
        for(int i = 0; i < tlen; ++i)
        {
            checker[i] = t.charAt(i);
        }

        Arrays.sort(dict);
        Arrays.sort(checker);

        return Arrays.equals(dict,checker);

    }
}
