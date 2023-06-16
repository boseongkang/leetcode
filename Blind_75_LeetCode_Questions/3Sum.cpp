class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
     {
        sort(nums.begin(), nums.end());
        if(nums.size() < 3 ) // base 1 for at least three num
            return {};
        if(nums[0] > 0) // base 2 for negative num
            return {};
        int result = 0; 

        set<vector<int>> s;
        // unordered_map<int, int> umap;
        vector<vector<int>> output;

        for(int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == result) 
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < result) 
                    j++;
                else 
                    k--;
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
            return output;
        
        }
};
