class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        // int len = coins.size();
        // sort(coins.begin(), coins.end(), greater<>()); // sort descending order        
        // int cnt = 0;

        // for(int i = 0; i < len; i++)
        // {
        //     amount -= coins[i];
        //     cnt++;
        //     if(coins[i] > amount)
        //     {
        //         amount -= coins[i];
        //         i--;
        //         cnt++;
        //     }
        //     else
        //     {
        //         if(amount == coins[i])
        //         {
        //             cnt++;
        //         }
        //     }

        // }
        // return cnt;

        int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) 
        {
            for (int j = 0; j < coins.size(); j++) 
            {
                if (coins[j] <= i)
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];

    }
};
