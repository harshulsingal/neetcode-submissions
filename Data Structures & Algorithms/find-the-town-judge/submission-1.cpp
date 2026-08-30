class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in(n, 0);
        vector<int> out(n, 0);

        for (auto& t : trust) {
            int a = t[0] - 1;
            int b = t[1] - 1;

            out[a]++;
            in[b]++;
        }

        for (int i = 0; i < n; i++) {
            if (out[i] == 0 && in[i] == n - 1) {
                return i + 1;
            }
        }

        return -1;
    }
};