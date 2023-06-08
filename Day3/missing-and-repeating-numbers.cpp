#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // XOR OP

    int sum_n = (n*(n+1))/2;
    // cout<<sum_n<<" ";
    unordered_map<int,int>mp;
    int sum=0;
    for(auto it:arr){
        mp[it]++;
        sum+=it;
    }
    int ret=0;
    for(auto it:mp){
        if(it.second>1){
            ret =it.first;
        }
    }
    sum-=ret;
    // cout<<sum;
    sum_n-=sum;
    return {sum_n, ret};

	
}
