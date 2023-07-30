// sol 1:
sort(vec.begin(), vec.begin());

// o(n*log(n)), o(1)
//----------------------------------

// sol no2 : 
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max_ele = -1;
    for(int i=0; i<n; i++){
        if(max_ele<arr[i]){
            max_ele = arr[i];
        }
    }
    return max_ele;
}

// o(n), o(1)