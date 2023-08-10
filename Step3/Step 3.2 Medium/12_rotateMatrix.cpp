
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int n = mat.size();
	vector<vector<int>>store(n, vector<int>(n,0));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			store[j][n-i-1] = mat[i][j];
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			mat[i][j] = store[i][j];
		}
	}
}

// o(n*n), o(n*n)
// sol no. 2:
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int n = mat.size();
	vector<vector<int>>store(n, vector<int>(n,0));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<i; j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i = 0; i<n; i++){
		reverse(mat[i].begin(), mat[i].end());
	}
	
}

// o(n*N), o(1);