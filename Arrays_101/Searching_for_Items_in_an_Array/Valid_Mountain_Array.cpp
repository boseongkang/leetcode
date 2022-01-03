class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if (arr.size() <= 2)
            return false;
        
        int i = 0;
        int n = arr.size() - 1;

        while (i < n && arr[i] < arr[i+1])
            i++;
           
        if (i == 0 || i == arr.size()-1)
            return false;
        
        while (i < n && arr[i] > arr[i+1])
            i++;
        
        return i == n;
    }
};
