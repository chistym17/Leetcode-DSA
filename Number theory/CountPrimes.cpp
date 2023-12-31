#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPrimes(int n) {
        vector<bool>arr(n+1,true);
        arr[0]=false;
        arr[1]=false;

        for(int i=2;i*i<=n;i++)
        {
          if(arr[i])
          {
          for(int j=i*i;j<=n;j=j+i)
          {
              arr[j]=false;
          }

           }

        }
        int count = 0;
		for (int i = 2; i < n; i++) {
			if (arr[i]) {
				count++;
			}
		}
		return count;
    }
};