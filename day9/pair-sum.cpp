#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   int n = arr.size();
   vector<vector<int>>ans;
   for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
         if(s-arr[i]==arr[j]){
            ans.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
         }
      }
   }
   sort(begin(ans), end(ans));
   return ans;
}
