#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<vector<int>> ans;

public:
    void solve(vector<int>& nums, vector<int>& output, int target, int start) {
        if (target == 0) {
            ans.push_back(output);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue;  
            }

            if (nums[i] > target) {
                break;  
            }

            output.push_back(nums[i]);
            solve(nums, output, target - nums[i], i + 1);
            output.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> output;
        sort(nums.begin(), nums.end());
        solve(nums, output, target, 0);
        return ans;
    }
};
