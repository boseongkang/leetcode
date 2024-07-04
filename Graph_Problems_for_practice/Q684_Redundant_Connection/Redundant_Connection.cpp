#include <vector>

using namespace std;

class Solution {
private:
    vector<int> parent; // Parent array to keep track of the roots
    vector<int> rank;   // Rank array to keep track of tree heights

    // Find function with path compression
    int find(int node) {
        if (parent[node] != node) {
            parent[node] = find(parent[node]); // Path compression
        }
        return parent[node];
    }

    // Union function with union by rank
    bool unionNodes(int node1, int node2) {
        int root1 = find(node1);
        int root2 = find(node2);

        if (root1 != root2) { // Only union if they are in different sets
            if (rank[root1] > rank[root2]) {
                parent[root2] = root1; // Attach shorter tree under the root of the taller tree
            } else if (rank[root1] < rank[root2]) {
                parent[root1] = root2; // Attach shorter tree under the root of the taller tree
            } else {
                parent[root2] = root1; // If equal, attach and increase the rank
                rank[root1] += 1;
            }
            return true;
        }
        return false;
    }

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n + 1);  // Resize parent array to n + 1
        rank.resize(n + 1, 1); // Resize rank array to n + 1 and initialize to 1

        // Initialize the parent array
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }

        // Iterate through each edge to find the redundant connection
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            if (!unionNodes(u, v)) { // If unionNodes returns false, there's a cycle
                return {u, v}; // Return the edge causing the cycle
            }
        }

        return {}; // In case no redundant edge is found (though the problem guarantees there is one)
    }
};

