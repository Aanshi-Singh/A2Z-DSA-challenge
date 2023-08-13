pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	pair<int, int>ans = {-1,-1};
	int l = 0;
	int r = n-1;
	sort(arr, arr+n);
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid] == x){
			return {x,x};
		}
		else if(arr[mid]>x){
			ans.second = arr[mid];
			r = mid -1;
		}
		else{
			ans.first = arr[mid];
			l = mid+1;
		}

	}
	return ans;
}
