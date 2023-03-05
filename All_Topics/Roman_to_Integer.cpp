class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        int len = s.size() - 1;
        unordered_map <char,int> u_map
        {
            {'I',1}, {'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for (int i = 0; i <= len; i++)
        {
            if(u_map[s[i]] < u_map[s[i+1]])
                result -= u_map[s[i]];
            else
                result += u_map[s[i]];
        }
        return result;
        
    }
};
