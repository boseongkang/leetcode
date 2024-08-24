class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        unordered_set<string> word_dict(wordDict.begin(), wordDict.end());
        int word_len = s.size();

        bool segment[word_len + 1];
        memset(segment, false, sizeof(segment));
        segment[0] = true;

        for(int i = 1; i <= word_len; ++i)
        {
            for(int j = 0; j < i; ++j) 
            {
                if(segment[j] && word_dict.count(s.substr(j, i - j)))
                {
                    segment[i] = true;
                    break;
                }
            }
        }
        return segment[word_len];
        

    }
};
