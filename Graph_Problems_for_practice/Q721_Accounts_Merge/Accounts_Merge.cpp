class Solution {
public:
    vector<int> parent;

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) 
    {
        int n = accounts.size();
        parent.resize(n);

        for(int i = 0; i <= n; ++i)
        {
            parent[i] = i;
        }

        unordered_map<string, int> emailToidx;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 1; j < accounts[i].size(); ++j)
            {
                string email = accounts[i][j];
                if(emailToidx.count(email))
                {
                    parent[find(i)] = find(emailToidx[email]);
                }
                else
                    emailToidx[email] = 1;
            }
        }

        unordered_map<int, unordered_set<string>> mergedAccounts;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 1; j < accounts[i].size(); ++j)
            {
                string email = accounts[i][j];
                mergedAccounts[find(i)].insert(email);
            }
        }

        vector<vector<string>> result;
        for(auto& [i,email]:mergedAccounts)
        {
            vector<string> account;
            account.push_back(accounts[i][0]);
            account.insert(account.end(), emails.begin(), emails.end());
            sort(account.begin() + 1, account.end());
            result.push_back(account);
        }



        
    }
};
