int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int l = 0;
	int r = n-1;
	int st = -1;
	int count = 0;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid] == x){
			st = mid;
			r = mid -1;
		}
		else if (arr[mid]<x) l = mid+1;
		else r = mid -1;
	}

	if(st!=-1){
		count = 1;
		while(arr[st] == arr[st+1])
		{st++;count++;}
		
	}
        return count;
}