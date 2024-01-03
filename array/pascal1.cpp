#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
vector<vector<int>>answer;

void singlerow(int n)
{
    
vector<int>temp;
int ans=1;
temp.push_back(ans);

for(int i=1;i<n;i++)
{
    ans=ans*(n-i);
    ans=ans/i;
    temp.push_back(ans);
}
answer.push_back(temp);

}

    vector<vector<int>> generate(int numRows) {
        for(int i=1;i<=numRows;i++)
        {
            singlerow(i);
        }
        return answer;
    }
};