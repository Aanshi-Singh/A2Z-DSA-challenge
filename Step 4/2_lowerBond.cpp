int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	for(int i = 0; i<n; i++){
		if(arr[i]>=x){
			return i;
		}
	}
	return n;
}

// sol 2

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int l = 0, r = n-1;
	int ans = n;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid] == x) return mid;
		else if(arr[mid]>x){
			ans = mid;
			r = mid -1;
		}
		else{
			l = mid+1;
		}
	}
	return ans;
}