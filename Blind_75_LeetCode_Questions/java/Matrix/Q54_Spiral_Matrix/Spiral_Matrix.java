class Solution {
    public List<Integer> spiralOrder(int[][] matrix) 
    {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int [] dirRow = {0, 1, 0, -1};
        int [] dirCol = {1, 0, -1, 0};
        int row = 0, col = 0, dirIndex = 0;
        List<Integer> result = new ArrayList<>();
        boolean[][] visited = new boolean[rows][cols];
        
        for(int h = rows * cols; h > 0; --h)
        {
            result.add(matrix[row][col]);
            visited[row][col] = true;
            int nextRow = row + dirRow[dirIndex];
            int nextCol = col + dirCol[dirIndex];
            if(nextRow < 0 || nextRow >= rows || nextCol < 0 || nextCol >= cols || visited[nextRow][nextCol])
            {
                dirIndex = (dirIndex + 1) % 4;
                nextRow = row + dirRow[dirIndex];
                nextCol = col + dirCol[dirIndex];
            }
            row = nextRow;
            col = nextCol;
        }
        return result;


    }
}
