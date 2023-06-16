#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  int n =arr.size();
  int ans =0;
  for(int i=0; i<n; i++){
    int sum =0;
    for(int j=i; j<n; j++){
      sum+=arr[j];
      if(sum==0){
        ans = max(ans, j-i+1);
      }
    }
  }
  return ans;

}
