class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1, 0);
        int cnt = 0;
        while(cnt <= n)
        {
            result[cnt] = result[cnt >> 1] + (cnt & 1);
            cnt++;
        }
        return result;
    }
};
