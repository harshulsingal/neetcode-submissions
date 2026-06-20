class Solution {
public:
    unordered_map<string, bool> memo;

    bool wordBreak(string s, vector<string>& wordDict) {
        if (s == "") return true;
        if (memo.count(s)) return memo[s];

        for (string& word : wordDict) {
            if (s.size() >= word.size() && s.compare(0, word.size(), word) == 0) {
                string remaining = s.substr(word.size());
                if (wordBreak(remaining, wordDict)) {
                    return memo[s] = true;
                }
            }
        }
        return memo[s] = false;
    }
};