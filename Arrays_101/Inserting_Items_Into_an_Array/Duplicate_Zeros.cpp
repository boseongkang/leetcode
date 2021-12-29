class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size() - 1;
        
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] == 0)
            {
                for (int j = n; j >= i + 1; j--)
                {
                    arr[j] = arr[j - 1];
                }
                i += 1;
            }
        }
        
    }
};
