// sol 1
#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	if(n == 1) return v[0];
	map<int, int> mp;
	for(int i = 0; i<n; i++){
		mp[v[i]]+=1;
		if(mp[v[i]] > n/2){
			return v[i];
		}
	}
	return -1;
	
}

// o(n), o(n)
//---------------------------------------------
// sol 2

// moore's algo

#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	int cnt =0, n = v.size(), ele;

	for(int i = 0; i<n; i++){
		if(cnt == 0){
			cnt+=1;
			ele = v[i];		
		}
		else if(ele == v[i]) {
			cnt+=1;
		}
		else cnt--;
	}
	int temp = 0;
	for(int i =0; i<n; i++){
		if(v[i] == ele) temp+=1;
	}
	if(temp>n/2) return ele;
	return -1;	
}
// o(n), o(1)