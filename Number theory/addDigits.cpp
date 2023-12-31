#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int solve(int num)
{

int sum=0;
int temp=num;
while(temp!=0)
{
    sum+=temp%10;
    temp=temp/10;
}
if(sum<10)return sum;
else return solve(sum);

}
    int addDigits(int num) {
        return solve(num);
    }
};