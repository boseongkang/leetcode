class Solution {
    public int maxArea(int[] height) 
    {
        int start = 0;
        int end = height.length - 1;
        int area = 0;

        while(start < end)
        {
            int minH = Math.min(height[start], height[end]);
            int width = end - start;
            area = Math.max(area, minH * width);

            if(height[start] < height[end])
                start++;
            else if(height[start] > height[end])
                end--;

        }
        return area;

    }
}
