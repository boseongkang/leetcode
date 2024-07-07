class Solution {
private:
    vector<int> parent;
    vector<int> rank;

    int find(int node)
    {
        if(parent[node] != node) // if node is not parent node, make that node as a parent; 
            parent[node] = find(parent[node]);
        return parent[node]; // if node is parent node, just return it. 
    }
    
    bool unionFind(int node1, int node2)
    {
        int root1 = find(node1); // make variable root1 & root2 parent node to compare 
        int root2 = find(node2);

        if(root1 != root2) // if root1 and root2 is same, it means parent node is same, also means this is not a tree; cycle
        {
            if(rank[root1] == rank[root2]) // if the rank(depth) is same, put the node under the parent node and increase rank(depth) 1
            {
                parent[root1] = root2;
                rank[root1] += 1;
            }
            else if(rank[root1] > rank[root2]) // if the root[rank1] > rank[root2] the depth of rank1 is big, so make node under the parent
                parent[root2] = root1; 
            return true;
        }
        return false;
    }


public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int n = edges.size();
        parent.resize(n+1);
        rank.resize(n+1, 1);

        for(int i = 0; i <= n; ++i)
        {
            parent[i] = i;
        }

        for(auto& edge:edges)
        {
            int u = edge[0];
            int v = edge[1];
            if(!unionFind(u,v))
                return {u,v};
        }
    return {}; 
    }
};
