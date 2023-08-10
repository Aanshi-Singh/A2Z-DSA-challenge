#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> ans;
	int n = v.size();
	map<int, int> mpp;
	for(int i = 0; i<n; i++){
		mpp[v[i]]+=1;
	}
	for(auto &it : mpp){
		if(it.second>n/3){
			ans.push_back(it.first);
		}
	}
	return ans;
}