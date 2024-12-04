class Solution {
    public boolean isPalindrome(String s) 
    {
        String str = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int len = str.length();
        int first = 0;
        int last = len - 1;

        while(first < last)
        {
            if(str.charAt(first) == str.charAt(last))
            {
                --last;
                ++first;
            }
            else
                return false;
        }
        return true;
    }
}
