// Source: https://leetcode.com/problems/product-of-array-except-self/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        deque<int> pr;
        deque<int> pf;
        vector<int> ans;

        int s = nums.size();
        pr.push_back(nums[0]);
        for (int i = 1; i < s; i++) {
            pr.push_back(nums[i] * pr[i-1]);
        }

        pf.push_front(nums[s-1]);
        for (int i = s-2; i >= 0; i--) {
            pf.push_front(nums[i] * pf[0]);
        }

        for (int i = 0; i < s; i++) {
            if (i == 0) {
                ans.push_back(pf[i+1]);
            } else if (i == s-1) {
                ans.push_back(pr[i-1]);
            } else {
                ans.push_back(pr[i-1] * pf[i+1]);
            }
        }
        return ans;
    }
};