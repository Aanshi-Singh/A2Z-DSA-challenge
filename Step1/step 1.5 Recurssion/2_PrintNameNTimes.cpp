void vecRec(vector<string> &vec, int n){
	if(n==1){
		vec.push_back("Coding Ninjas");
		return;
	}
	vec.push_back("Coding Ninjas");
	vecRec(vec, n-1);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> vec;
	vecRec(vec, n);
	return vec;
}

// o(n), o(n)==> worst case