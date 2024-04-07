bool comparePairs(pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
}
// Source: https://leetcode.com/problems/top-k-frequent-elements/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<pair<int,int>> freq;
        int s = nums.size();
        while(s--) {
            m[nums[s]]++;
        }
        vector<int> a;
        for (auto& i : m) {
            freq.push_back(make_pair(i.first, i.second));
        }

        sort(freq.begin(), freq.end(), comparePairs);

        for (int i = 0; i < k; i++) {
            a.push_back(freq[i].first);
        }
        return a;
    }
};