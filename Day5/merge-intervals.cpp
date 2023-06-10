class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n =  intervals.size();
        int m =  intervals[0].size();
        if(n==1){
            return intervals;
        }
        vector<vector<int>>ans;
        for(int i=0; i<n; i++){
            if(ans.empty() || ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }else{
                ans.back()[1]= max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};
