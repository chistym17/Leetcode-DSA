#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return;
        int id1,id2;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
                id1=i;
                break;
            }
        }
        if(id1<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
         for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[id1]){
                id2=i;
                break;
            }
        }
        swap(nums[id1],nums[id2]);
        reverse(nums.begin()+id1+1,nums.end());

    }
};