class Solution {
public:
    vector<int> parent;

    int find(int node)
    {
        if(parent[node] != node)
            parent[node] = find(parent[node]);
        return parent[node];
    }

    void unionFind(int node1, int node2)
    {
        int root1 = find(node1);
        int root2 = find(node2);
        if(root1 != root2)
            parent[root1] = root2;
    }

    bool equationsPossible(vector<string>& equations) 
    {
        parent.resize(26);
        for(int i = 0; i < 26; ++i)
        {
            parent[i] = i;
        }

        for(auto& eq:equations)
        {
            if(eq[1] == '=')
            {
                int x = eq[0] - 'a';
                int y = eq[3] - 'a';
                unionFind(x,y);
            }
        }

        for(auto& eq:equations)
        {
            if(eq[1] == '!')
            {
                int x = eq[0] - 'a';
                int y = eq[3] - 'a';
                if(find(x) == find(y))
                    return false;

            }
        }
    return true;
    }
};
