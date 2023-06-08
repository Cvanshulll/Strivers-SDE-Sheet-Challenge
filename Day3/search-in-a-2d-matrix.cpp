bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int top = 0, bottom = matrix.size()-1;
    
        // upper bound
        while(top<=bottom){
            int mid =(top+bottom)/2;
            if(matrix[mid][0]>=target){
                row = mid;
                bottom = mid-1;
            }else{
              top = mid+1;  
            }
        }
        if(row==matrix.size()){
            // cout<<row;
            // return true;
        }
        // cout<<row;
        if(row!=matrix.size() && matrix[row][0]==target){
            return true;
        }
        else{
            if(row!=0 )
                row--;
            // cout<<row<<" ///";
            
            int left = 0, right=matrix[0].size()-1;
            // cout<<(left+right)/2;
            int mid = (left+right)/2;
            // cout<<mid;
                // cout<<matrix[row][mid]<<" ";
                // break;
            while(left<=right){
                int mid = (left+right)/2;
                // cout<<matrix[row][mid];
                if(matrix[row][mid]==target){
                    return true;
                }
                else if(matrix[row][mid]<target){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
        }
        return false;
}
