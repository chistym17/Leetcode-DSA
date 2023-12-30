#include <bits/stdc++.h>
using namespace std;

class Solution {
      vector<vector<int>> ans;
public:

void solve(vector<int>&nums,vector<int>&output,int target,int i)
{
if(target==0){
    ans.push_back(output);
    return;
}
if(target<0)return;

for(int j=i;j<nums.size();j++)
{
output.push_back(nums[j]);
solve(nums,output,target-nums[j],j);
output.pop_back();

}
    
}

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>output;
        solve(nums,output,target,0);
        return ans;

    }
};
