#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int n=1;
        while(num>0)
        {
            num=num-n;
            n=n+2;
        }
        return num==0;
    }
};