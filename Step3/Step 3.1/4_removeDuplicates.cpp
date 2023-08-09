// sol 1.: 
// using sets

set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
// O(n*log(n))+O(n), o(n)

// sol2: 
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int count = 1;
        for (int i = 1; i < n; i++) {
			if(arr[i-1] != arr[i]){
				count+=1;
			}
        }
		return count;

}

// o(n)