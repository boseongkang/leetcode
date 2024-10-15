class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        int rowCount = board.size();
        int colCount = board[0].size();

        int directions[5] = {-1, 0, 1, 0, -1};

        function<bool(int, int, int)> dfs = [&](int row, int col, int wordIndex) -> bool
        {
            if(wordIndex == word.size() -1)
                return board[row][col] == word[wordIndex];
            if(board[row][col] != word[wordIndex])
                return false;
        char tempChar = board[row][col];
        board[row][col] = '0';

        for(int dir = 0; dir < 4; ++dir)
        {
            int newRow = row + directions[dir];
            int newCol = col + directions[dir + 1];
            if(newRow >= 0 && newRow < rowCount && newCol >= 0 && newCol < colCount && 
            board[newRow][newCol] != '0' &&  dfs(newRow,newCol, wordIndex + 1))
                return true;
        }
        
        board[row][col] = tempChar;
        return false;
        };

        for(int i = 0; i < rowCount; ++i)
        {
            for(int j = 0; j < colCount; ++j)
            {
                if(dfs(i,j,0))
                    return true;
            }
        }
        return false;
    }
};
