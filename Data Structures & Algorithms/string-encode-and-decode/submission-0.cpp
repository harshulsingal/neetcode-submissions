class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded;
        for (const string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            // Find the position of '#'
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, length);
            result.push_back(word);
            i = j + 1 + length;
        }
        return result;
    }
};
