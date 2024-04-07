// Source: https://leetcode.com/problems/group-anagrams/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>, vector<string>> m;
        int s = strs.size();
        while(s--) {
            map<char,int> a;
            int ss = strs[s].length();
            while(ss--) {
                a[strs[s][ss]]++;
            }
            m[a].push_back(strs[s]);
        }
        vector<vector<string>> solution;
        for (const auto& i : m) {
            int l = i.second.size();
            solution.push_back(i.second);
        }
        return solution;
    }
};