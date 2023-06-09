#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
  
//    BRTUE FORCE -> IF([I][J]==0) CHANGE ALL TO -1 EXCEPT Os -----------> TC: O((N*M)*(N + M)) + O(N*M) || SC:0(1)
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
	
// 	 Better Approach -> use extra row and col vector ------------> TC: O(2*(N*M))|| SC: O(N) + O(M)
	int n = matrix.size();
	int m = matrix[0].size();
	vector<int>row(n, -1);
	vector<int>col(m, -1);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				row[i]=0, col[j]=0;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
            if(row[i]==0|| col[j]==0){
				matrix[i][j]=0;
			}      
        }
    }

}
