class Solution {
public:
    vector<int> parent;

    int find(int node)
    {
        if(parent[node] != node)
            parent[node] = find(parent[node]);
        return parent[node];
    }

    int makeConnected(int n, vector<vector<int>>& connections) 
    {
        if(connections.size() < n - 1)  return -1;
        parent.resize(n,0);
        for(int i = 0; i < n; ++i)
        {
            parent[i] = i; // 이걸 해야만 인덱싱이 된다. 이거 없으면 틀림 
        }
        int cnt = 0;

        for(auto & edge:connections)
        {
            int root1 = find(edge[0]);
            int root2 = find(edge[1]);

            if(root1 == root2)
                cnt++;
            else
            {
                parent[root1] = root2;
                --n;
            }
        }
        return (n - 1) > cnt ? -1 : n-1;
    }
};
