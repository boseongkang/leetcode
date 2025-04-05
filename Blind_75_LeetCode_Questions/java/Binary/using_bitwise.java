class Solution {
    public int getSum(int a, int b) 
    {
        while(b != 0)
        {
            int num = (a & b) << 1;
            a = a ^ b;
            b = num;
        } 
        return a;
    }
}
