class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> directions = {0, 1, 0, -1, 0};
        vector<int> result;
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        int row = 0, col = 0, dirIndex = 0;
        
        for(int remain = rows * cols; remain > 0; --remain)
        {
            result.push_back(matrix[row][col]);
            visited[row][col] = true;

            int nextRow = row + directions[dirIndex];
            int nextCol = col + directions[dirIndex + 1];

            if((nextRow < 0) || (nextRow >= rows) || (nextCol < 0) || (nextCol >= cols) || (visited[nextRow][nextCol]))
            {
                dirIndex = (dirIndex + 1) % 4;
            }

            row = row + directions[dirIndex];
            col = col + directions[dirIndex + 1];
        }
        return result;
        
    }
};
