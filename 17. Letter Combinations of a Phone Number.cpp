class Solution {
public:
    vector<string> res;
    vector<string> map = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        string path;
        backtrack(digits, 0, path);
        return res;
    }

    void backtrack(const string &digits, int index, string &path) {
        if (index == digits.size()) {
            res.push_back(path);
            return;
        }
        string letters = map[digits[index] - '0'];
        for (char c : letters) {
            path.push_back(c);
            backtrack(digits, index + 1, path);
            path.pop_back();
        }
    }
};
