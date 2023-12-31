#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void solve(int &n , int &ans){
          if(n>=0 && n<=9){
              ans = n;
              return ;
          }

          int sum=0;
          while(n>0){
              int a = n%10;
              sum+=a*a;
              n=n/10;
          }
          solve(sum,ans);
  }
public:
    bool isHappy(int n) {
        int ans = 0;
        solve(n, ans);
        if(ans==1 ||   ans==7)return true;
        return false;
    }
};