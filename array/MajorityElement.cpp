#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxi=nums[0];
        for(auto a:mp)
        {
            if(a.second>mp[maxi])
            maxi=a.first;
        }
        return maxi;
    }
};