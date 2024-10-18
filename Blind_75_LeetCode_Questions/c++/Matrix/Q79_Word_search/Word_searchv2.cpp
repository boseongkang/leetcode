class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        int rowNum = board.size();
        int colNum = board[0].size();
        int directions[5] = {-1, 0, 1, 0, -1}; // up, right, down, left 

        function<bool(int, int, int)> dfs = [&](int row, int col, int index) -> bool
        {
            if(index == word.size() - 1) // if index is sames as last character of word variable
                return board[row][col] == word[index]; // word = "ABCCED"
            if(board[row][col] != word[index])
                return false;
            char temp = board[row][col];
            board[row][col] = '0';

            for(int dir = 0; dir < 4; ++dir)
            {
                int newRow = row + directions[dir]; // {-1, 0, 1, 0, -1} think as (-1,0),(0,1),(1,0),(0,-1) 
                int newCol = col + directions[dir + 1]; // first element is row and the second is col so it should be + 1
                
                if((newRow >= 0) && (newRow < rowNum) && (newCol >= 0) && (newCol < colNum) &&
                (board[newRow][newCol] != '0') && (dfs(newRow, newCol, index + 1)))
                    return true;
            }
        board[row][col] = temp;
        return false;
        };

        for(int i = 0; i < rowNum; ++i)
        {
            for(int j = 0 ; j < colNum; ++j)
            {
                if(dfs(i, j, 0))
                    return true;
            }
        }
    return false;
    }
};

