// Source: https://leetcode.com/problems/longest-consecutive-sequence/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // <first_of_sequence, exists>
        unordered_map<int,bool> m;
        int s = nums.size();
        for (int i = 0; i < s; i++) {
            m[nums[i]] = 1;
        }
        int mx = 0;
        for (int i = 0; i < s; i++) {
            if (!m[nums[i]-1]) {
                int seq = 1;
                while(m[nums[i]+seq]) {
                    seq++;
                }
                mx = max(mx,seq);
            }
        }
        return mx;
    }
};