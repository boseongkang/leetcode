class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string str = "";
        int len = strs.size();

        // if(len == 0)
        //     return "";

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[len-1];

        for(int i = 0; i < first.size(); i++)
        {
            if(first[i] == last[i])
                str += first[i];
            else
                break;
        }
            return str;
    }      
};
