#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int l =0, r=0;
    int profit=0;
    for(int i=0; i<n; i++){
        if(prices[r]>prices[l]){
            profit = max(profit, prices[r]-prices[l]);
        }
        else{
            l = r;
        }
        r++;
    }
    return profit;
}
