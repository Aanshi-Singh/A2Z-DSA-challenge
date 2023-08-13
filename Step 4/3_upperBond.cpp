int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	for(int i = 0; i<n; i++){
		if(arr[i]>x){
			return i;
		}
	}
	return n;
}
//--------------------------------------------------
// sol 2
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int l = 0, r = n-1, ans = n;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid] > x){
			ans = mid;
			r = mid -1;
        } 
		else{
                l = mid + 1;
            }
        }

		return ans;
}