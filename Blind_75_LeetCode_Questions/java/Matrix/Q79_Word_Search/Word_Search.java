class Solution {
    private String searchArr; 
    private char[][] tempArr;
    private int rowNum;
    private int colNum;

    public boolean exist(char[][] board, String word) 
    {
        rowNum = board.length;
        colNum = board[0].length;
        searchArr = word;
        tempArr = board;

        for(int i = 0; i < rowNum; ++i)
        {
            for(int j = 0; j < colNum; ++j)
            {
                if(dfs(i, j, 0))
                    return true;
            }
        }
        return false;
    }
    
    private boolean dfs(int row, int col, int index)
    {
        
        if(index == searchArr.length() - 1)
            return tempArr[row][col] == searchArr.charAt(index); // charAt returns the character located in index
        if(tempArr[row][col] != searchArr.charAt(index))
            return false;
    
    char tempChar = tempArr[row][col];
    tempArr[row][col] = '0';

    int[] directions = {-1, 0, 1, 0, -1}; // up right down left (-1, 0), (0, 1), (1,0), (0, -1)
    for(int i = 0; i < 4; ++i)
    {
        int newRow = row + directions[i];
        int newCol = col + directions[i + 1];

        if((newRow >= 0) && (newRow < rowNum) && (newCol >= 0) && (newCol < colNum) && (tempArr[newRow][newCol] != '0'))
            if(dfs(newRow, newCol, index + 1))
                return true;

    }
    tempArr[row][col] = tempChar;
    return false;
    }

}
