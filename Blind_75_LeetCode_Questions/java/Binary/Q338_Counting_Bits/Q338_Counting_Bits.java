class Solution {
    public int[] countBits(int n) 
    {
        int []arr = new int[n + 1];

        for(int num = 0; num <= n; ++num)
        {
            int temp = num;
            int cnt = 0;

            while(0 < temp)
            {
                if((temp % 2) == 1)
                    cnt++;
                temp /= 2;
            }
            arr[num] = cnt;
        }
        return arr;
        
    }
}
