class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int size = matrix.size();
      
        for (int row = 0; row < size / 2; ++row) 
        {
            for (int col = 0; col < size; ++col) 
            {
                swap(matrix[row][col], matrix[size - row - 1][col]);
            }
        }
      
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

