int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i = 1; i< a.size(); i++){
        if(a[i-1]>a[i])
        return 0;
    }
    return 1;
}

// o(n), o(1)