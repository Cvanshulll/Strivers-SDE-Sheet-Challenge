#include <bits/stdc++.h>
using namespace std;

long long merge(long long *arr, int low, int mid, int high){
    int left = low, right=mid+1;
    long long cnt=0;
    vector<long long>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{ 
            temp.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
}

long long mergeSort(long long *arr, long long low, long long high){
    long long cnt=0;
    // if(low>=high)   return cnt;
    if(low<high){
        int mid = (low+high)/2;
        cnt+=mergeSort(arr, low, mid);
        cnt+=mergeSort(arr, mid+1, high);
        cnt+=merge(arr, low, mid, high);
    }
    return cnt;
}
long long mergesort(long long *arr, int n) {

    return mergeSort(arr, 0, n - 1);

}

long long getInversions(long long *arr, int n){

    return mergesort(arr,n);
}
