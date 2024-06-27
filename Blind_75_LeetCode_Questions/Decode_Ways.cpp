class Solution {
public:
    int numDecodings(string s) 
    {
        int num = s.size();
        if(num == 0 || s[0] == '0') return 0;

        vector<int> arr(num + 1, 0);
        arr[0] = 1;

        for(int i = 1; i <= num; ++i)
        {
            if(s[i - 1] != '0')
                arr[i] += arr[i - 1];
            if(i > 1 && (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')))
                arr[i] += arr[i - 2];
        }
        
        return arr[num];
        
    }
};
