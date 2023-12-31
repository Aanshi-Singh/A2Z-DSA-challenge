// sol no.: 1
int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int xorr = 0;
	for(int i = 0; i<arr.size(); i++){
		xorr^=arr[i];
	}
	return xorr;
}

//--------------------------------------------------------------
//sol 2:

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();
	if(n == 1) return arr[0];
	if(arr[0]!=arr[1]) return arr[0];
	if (arr[n-1]!=arr[n-2]) return arr[n-1];

	int l = 1;
	int r = n-2;
	
	while(l<=r){

		int mid = (l+r)/2;
		if(arr[mid]!= arr[mid+1] && arr[mid-1]!=arr[mid]){
			return arr[mid];
		}

		if((mid%2 == 1 && arr[mid] == arr[mid-1]) ||
		 (mid%2 == 0 && arr[mid]== arr[mid+1]))
			l = mid+1;
		
		else {
			r = mid-1;
		}
	}
	return -1;
}