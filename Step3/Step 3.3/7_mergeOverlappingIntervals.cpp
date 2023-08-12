#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	vector<vector<int>>ans;
	sort(arr.begin(), arr.end());
	vector<int>temp = arr[0];
	for(auto &it : arr){
		if(it[0]<=temp[1]){
			temp[1] = max(temp[1], it[1]);
		}
		else{
			ans.push_back(temp);
			temp = it;
		}
	}
	ans.push_back(temp);

	return ans;
	
}

//=====================================================
// sol 2

#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	vector<vector<int>>ans;
	sort(arr.begin(), arr.end());
	// vector<int>temp = arr[0];
	for(int i = 0 ; i < n; i++){
		if(ans.empty() || arr[i][0]>ans.back()[1]){
			ans.push_back(arr[i]);
		}
		else{
			ans.back()[1] = max(ans.back()[1], arr[i][1]);
		}
	}

	return ans;
	
}