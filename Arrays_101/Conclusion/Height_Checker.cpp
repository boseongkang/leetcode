class Solution {
public:
    int heightChecker(vector<int>& height)
    {
        int n = height.size() - 1;
        vector<int> new_arr;
        new_arr = height;
        sort(new_arr.begin(), new_arr.end());
        int cnt = 0;

        for(int i = 0; i<= n; i++)
        {
            if( height[i] != new_arr[i] )
                cnt++;
        }
        return cnt;
    }
};
