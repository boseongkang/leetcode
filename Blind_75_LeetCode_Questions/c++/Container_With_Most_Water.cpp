class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int container = 0;
        int i = 0;
        int n = height.size() - 1; // n = 8
        
        while(i < n)
        {
            if(height[i] < height[n])
            {
                container = max(container, (n - i) * height[i]);
                i++;

            }
            else // i > n 
            {
                container = max(container, (n - i) * height[n]);
                 n--;
            }
        }
        return container;


    }
};
