class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Brute force -----> TC: O(N* logN) || SC: O(1)
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;
        // HASHTABLE CAN ALSO BE USED ----> TC: O(N) || SC: O(N)
    }
};
