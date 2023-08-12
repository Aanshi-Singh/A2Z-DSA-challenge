#include<vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int max_count = 0;
	int n = arr.size();
	for(int i = 0; i<n; i++){
		int count = 0;
		int sum = 0;
		for(int j = i; j<n; j++){
			sum+=arr[j];
			count+=1;
			if(sum == 0){
				max_count=max(max_count, count);
			}
			
		}
	}
	return max_count;
	
}

// sol 2:
#include<vector>
#include<bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	map<int,int>mpp;
	int n = arr.size();
	int sum = 0;
	int maxcount = 0;
	for(int i = 0; i<n; i++){
		sum+=arr[i];
		if(sum == 0){
			maxcount= i+1;
		}
		else{
			if(mpp.find(sum)!=mpp.end()){
				maxcount = max(maxcount, i-mpp[sum]);
			}
			else{
				mpp[sum] = i;
			}
		}
		
	}
	return maxcount;
	
}