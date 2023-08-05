// sol 1:
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int count = 0;
    for(int i = 0; i<n; i++){
        long long sum = 0;
        for(int j = i; j<n; j++){
            sum+=a[j];
            if(sum == k){
                count = max(count, j-i+1);
            }
        }
    }
    return count;
}

// o(n^2), o(1)
//----------------------------------------
// sol no 2:
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int left = 0; 
    int right = 0;
    long long sum = 0;
    int count  = 0;

    while(right<n){
        sum+= a[right];

        while(left<=right && sum>k){
        sum-=a[left];
        left++;
        }

        if(sum == k){
            count = max(count, right-left+1);
        }
        right++;
        }
    return count;
}
// o(2^n)=> , o(1)