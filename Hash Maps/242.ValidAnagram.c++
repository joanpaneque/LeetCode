// Source: https://leetcode.com/problems/valid-anagram/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        if (l1 != l2) return false;
        map<char,int> m;
        map<char,int> p;
        while(l1--) {
            m[s[l1]]++;
            p[t[l1]]++;
        }

        for (const auto& i : m) {
            if (i.second != p[i.first]) return false;
        }
        return true;
    }
};