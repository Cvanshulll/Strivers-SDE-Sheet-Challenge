#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
        int id1=-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                id1=i;
                break;
            }
        }
        // cout<<id1;
        if(id1==-1){
            reverse(nums.begin(), nums.end());
            return nums;
        }
        else{
            for(int i=n-1; i>id1; i--){
                if(nums[i]>nums[id1]){
                    swap(nums[i], nums[id1]);
                    break;
                }
            }
        }
        // swap(nums[id1], nums[id2]);
        reverse(nums.begin()+id1+1, nums.end());
        return nums;
    
}
