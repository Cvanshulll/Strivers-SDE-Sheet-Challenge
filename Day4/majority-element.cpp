#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int>mp;
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	int k = floor(n/2);
	for(auto it:mp){
		if(it.second>k){
			return it.first;
		}
	}
	return -1;
}
