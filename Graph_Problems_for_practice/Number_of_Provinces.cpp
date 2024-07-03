class Solution {
public:

    void dfs(const vector<vector<int>>& isConnected, vector<bool>& visited, int city)
    {
        int n = isConnected.size();
        for(int i = 0; i < n; ++i)
        {
            if((isConnected[city][i] == 1) && (visited[i] == false))
            {
                visited[i] = true;
                dfs(isConnected, visited, i);
            }
        }
    };


    int findCircleNum(vector<vector<int>>& isConnected) 
    {  
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int cnt = 0;

        for(int i = 0; i < n; ++i)
        {
            if(visited[i] == false)
            {
                dfs(isConnected, visited, i);
                ++cnt;
            }
        }
        return cnt;
    }
};

// tracker 
//         isConnected = [[1,0,0],[0,1,0],[0,0,1]]; 
//         n  = 3; 
//         visited[] = [false, false, false];
//         int cnt = 0;

//         for ( 0 ~ 3)
//         {
//             check if visited[i] == false
//             {
//                 call dfs(isConnected, visted array, i);  i = 0, visited = [true, f,f] 
//                 ++cnt; -> return how many cities have travled; -> cnt =
//             }
//         }
