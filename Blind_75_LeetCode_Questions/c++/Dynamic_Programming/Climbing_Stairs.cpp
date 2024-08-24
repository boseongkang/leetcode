class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) return 0; //base
        if(n == 1) return 1; //base
        
        int first = 1;
        int sec = 1;
        int temp = 0;
        int cnt = 2;

        while(cnt <= n)
        {
            temp = first + sec;
            first = sec;
            sec = temp;
            cnt++;
        }
        return sec;
    }
};
