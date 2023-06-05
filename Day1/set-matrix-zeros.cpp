#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	vector<vector<int>>v(n, vector<int>(m, -1));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				int r = i, c=j;
				for(int k=0; k<m; k++){
					if(matrix[r][k]!=0){
						matrix[r][k]=-1;
					}
				}
				for(int k=0; k<n; k++){
					if(matrix[k][c]!=0){
						matrix[k][c]=-1;
					}
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

}
