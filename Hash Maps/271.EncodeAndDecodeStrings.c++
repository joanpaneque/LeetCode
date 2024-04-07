// Source: https://leetcode.com/problems/encode-and-decode-strings/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";
        int s = strs.size();
        for (int i = 0; i < s; i++) {
            int l = strs[i].length();
            for (int e = 0; e < l; e++) {
                res+=strs[i][e];
            }
            res+="<";
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int x = 0;
        int l = s.length();
        res.push_back("");
        for (int i = 0; i < l; i++) {
            if (s[i] == '<') {
                x++;
                res.push_back("");
            } else {
                res[x]+=s[i];
            }
        }
        res.pop_back();
        return res;
    }
};
