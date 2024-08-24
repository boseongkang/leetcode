class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < min)
                min = prices[i];
            prices[i] -= min;
            if(prices[i] > max)
                max = prices[i];
        }
        return max;
    }
};

Runtime: 314 ms, faster than 44.56% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 93.4 MB, less than 9.79% of C++ online submissions for Best Time to Buy and Sell Stock.
note : I think its not efficient. I tried not to use the min and max functions.
