#include <bits/stdc++.h> 

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
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int l = 0, r = n-1;
	int ans = n;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]>=x){
			ans = mid;
			r = mid -1;
		}
		else{
			l = mid+1;
		}
	}
	return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x)
{
	int lb = lowerBound(arr, n,x);
	int ub = upperBound(arr, x, n);
    if( lb == n || arr[lb] != x) return {-1,-1};
	return {lb, ub-1};

}