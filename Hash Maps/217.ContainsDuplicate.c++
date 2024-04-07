// Source: https://leetcode.com/problems/contains-duplicate/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        int size = nums.size();
        while(size--) {
            m[nums[size]]++;
            if (m[nums[size]] == 2) {
                return true;
            }
        }
        return false;
    }
};