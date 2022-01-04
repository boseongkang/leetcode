class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int end = -1;
        int n = arr.size();
        vector<int> new_arr(n);
        new_arr[n - 1] = -1;
        int cnt = n - 2;
        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] > end)
                end = arr[i];
            if(cnt >= 0)
                new_arr[cnt] = end;
            cnt--;
        }
        return new_arr;
        
    }
};

