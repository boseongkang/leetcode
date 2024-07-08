class Solution {
public:
    vector<int> parents;

    int removeStones(vector<vector<int>>& stones) {
        int maxCoord = 10010;
        parents.resize(maxCoord << 1);
        for (int i = 0; i < parents.size(); ++i) {
            parents[i] = i;
        }
      
        for (auto& stone : stones) {
            parents[find(stone[0])] = find(stone[1] + maxCoord);
        }
        unordered_set<int> uniqueRoots;
        for (auto& stone : stones) {
            uniqueRoots.insert(find(stone[0]));
        }
      
        return stones.size() - uniqueRoots.size();
    }

    int find(int x) {
        if (parents[x] != x) {
            parents[x] = find(parents[x]);
        }
        return parents[x];
    }
};

