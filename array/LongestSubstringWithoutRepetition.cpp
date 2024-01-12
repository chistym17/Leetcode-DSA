#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2)return s.size();
       unordered_set<char>st;
        int maxlen=0;
        int start=0;
        int end=0;
        while(start!=s.size())
        {
            if(st.find(s[start])==st.end())
            {
              maxlen = max(start-end+1, maxlen);
                st.insert(s[start++]);
            }
            else
            {st.erase(s[end++]);
            

            }
        }
        return maxlen;
    }
};