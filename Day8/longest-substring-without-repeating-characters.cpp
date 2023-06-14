#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    unordered_map<char, int>mp;
    int left=0, right=0;
    int ans=INT_MIN;
    while(right<s.size()){
        if(mp.find(s[right])!=mp.end()){
            left = max(mp[s[right]]+1, left);
        }
        mp[s[right]]=right;
        ans=max(ans, right-left+1);
        right++;
    }
    return ans;
}
