class Solution {
    public void setZeroes(int[][] matrix) 
    {
        int row_num = matrix.length;
        int col_num = matrix[0].length;
        boolean firstRow = false;
        boolean firstCol = false;

        for(int col = 0; col < col_num; ++col)
        {
            if(matrix[0][col] == 0)
            {
                firstRow = true;
                break;
            }
        }

        for(int row = 0; row < row_num; ++row)
        {
            if(matrix[row][0] == 0)
            {
                firstCol = true;
                break;
            }
        }
        
        for(int row = 1; row < row_num; ++row)
        {
            for(int col = 1; col < col_num; ++col)
            {
                if(matrix[row][col] == 0)
                {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }

        for(int row = 1; row < row_num; ++row)
        {
            for(int col = 1; col < col_num; ++col)
            {
                if((matrix[row][0] == 0) || (matrix[0][col] == 0))
                    matrix[row][col] = 0;
            }
        }

        if(firstRow == true)
        {
            for(int col = 0; col < col_num; ++col)
                matrix[0][col] = 0;
        }

        if(firstCol == true)
        {
            for(int row = 0; row < row_num; ++row)
                matrix[row][0] = 0;
        }
    }
}
