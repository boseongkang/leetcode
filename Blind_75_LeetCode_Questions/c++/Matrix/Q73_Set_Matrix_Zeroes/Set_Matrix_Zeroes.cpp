class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int row_num = matrix.size();
        int col_num = matrix[0].size();
        bool firstRowZero = false;
        bool firstColZero = false;

        for(int col = 0; col < col_num; ++col)
        {
            if(matrix[0][col] == 0)
            {
                firstRowZero = true;
                break;
            }
        }
        for(int row = 0; row < row_num; ++row)
        {
            if(matrix[row][0] == 0)
            {
                firstColZero = true;
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
        if(firstRowZero == true)
        {
            for(int col = 0; col < col_num; ++col)
                matrix[0][col] = 0;
        }

        if(firstColZero == true)
        {
            for(int row = 0; row < row_num; ++row)
            matrix[row][0] = 0;
        }
    }
};
