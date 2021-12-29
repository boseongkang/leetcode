class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int consc = 0;
        
        for (int num : nums){
            if (num){
                consc++;
            }else{
                cnt = max(cnt,consc);
                consc = 0;
            }
        }
        return max(cnt,consc);

    }
};
