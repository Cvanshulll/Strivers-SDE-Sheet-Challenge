#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int, int>mp;
    int n = arr.size();
    vector<int>ans;
    for(auto it:arr){
        mp[it]++;
    }
    for(auto it:mp){
        if(it.second>n/3)
            ans.push_back(it.first);
    }
    return ans;
}
