class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    if(m>n) return -1;
    sort(a.begin(),a.end());
    int mini = INT_MAX;
    for(int i = 0; i<=n-m; i++){
        int sub = a[i+m-1]-a[i];
        mini = min(mini, sub);
    }
    return mini;
    }
};

// better

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    int i = 0;
    int j = m-1;
    int mini = INT_MAX;
    while(j<n){
        int sub = a[j]-a[i];
        mini = min(mini, sub);
        j++;
        i++;
    }
    return mini;
    }
};

