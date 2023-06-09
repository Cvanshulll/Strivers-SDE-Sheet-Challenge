#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans;
  for(int i=0; i<n; i++){
    vector<long long int>temp(i+1, -1);
    temp[0]=1, temp[i]=1;
    for(int j=1; j<i; j++){
      temp[j]=ans[i-1][j-1]+ans[i-1][j];
    }
    ans.push_back(temp);
  }
  return ans;
}
