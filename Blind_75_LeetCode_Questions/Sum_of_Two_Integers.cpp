class Solution {
public:
    int add(int c, int d)
    {
        while (c > 0)
        {
            d++;
            c--;
        }
        while (c < 0)
        {
            d--;
            c++;
        }
        return d;
    }

    int getSum(int a, int b)
    {
        return add(a,b);
    }
};
