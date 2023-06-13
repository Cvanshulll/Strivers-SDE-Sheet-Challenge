class Solution {

private:

    void merge(vector<int>& arr, int low, int mid, int high){
    int left = low, right=mid+1;
    vector<int>temp;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{ 
            temp.push_back(arr[right]);
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
}

    int countPairs(vector<int>& arr, int low, int mid, int high){
        int cnt=0;
        int right = mid+1;
        for(int i=low; i<=mid; i++){
            while(right<=high && arr[i]>(long long)2*arr[right]){
                right++;
            }
            cnt=cnt+(right-(mid+1));
        }
        return cnt;
    }

    int mergeSort(vector<int>& arr, int low, int high){
        int cnt=0;
        if(low>=high)   
            return cnt;
        int mid = (low+high)/2;
        cnt+=mergeSort(arr, low, mid);
        cnt+=mergeSort(arr, mid+1, high);
        cnt+=countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return cnt;
    }
    

public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n-1);
    }
};