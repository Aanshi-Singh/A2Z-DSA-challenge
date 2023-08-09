vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    vector<int>ans;
    int left = 0, right = MATRIX[0].size()-1;
    int top = 0, bott = MATRIX.size()-1;

    while(left<=right && top<=bott){

        for(int i= left; i<=right; i++){
            ans.push_back(MATRIX[top][i]);
        }
        top++;

        for(int i= top; i<=bott; i++){
            ans.push_back(MATRIX[i][right]);
        }
        right--;

        if(top<=bott){
            for (int i = right; i >= left; i--) {
              ans.push_back(MATRIX[bott][i]);
            }
            bott--;
        }
        if(left<=right){
        for (int i = bott; i >= top; i--) {
            ans.push_back(MATRIX[i][left]);
        }
        left++;
        }
    }
    return ans;
}

// o(m*n), o(1)