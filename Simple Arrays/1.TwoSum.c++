// Source: https://leetcode.com/problems/two-sum/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for (int i = 0; i < nums.size(); i++) {
            for (int e = 0; e < nums.size(); e++) {
                if (e != i) {
                    if (nums[i]+nums[e] == target) {
                        solution.push_back(e);
                        solution.push_back(i);
                        return solution;
                    }
                }
            }
        }
        return solution;
    }
};