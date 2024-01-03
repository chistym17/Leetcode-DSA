#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int n) {
            
vector<int>temp;
long long int ans=1;
temp.push_back(ans);
int id=n+1;
for(int i=1;i<id;i++)
{
    ans=ans*(id-i);
    ans=ans/i;
    temp.push_back(ans);
}

return temp;



    }
};