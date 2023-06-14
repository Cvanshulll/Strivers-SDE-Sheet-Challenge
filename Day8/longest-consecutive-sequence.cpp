#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int>mp;
    for(int i=0; i<n; i++){
        mp.insert(arr[i]);
    }
    int longest=0;
    for(auto it:arr){
        if(mp.count(it-1)==0){
            int x = it;
            int cnt=1;
            while(mp.count(x+1)){
                x++;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
