class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size(); //size of array.
        int start = 1;
        int end = 1;
        int ans = INT_MIN;
        for(int i = 0; i<n; i++){
            if(start == 0) start = 1;
            if(end == 0) end = 1;
            start*=arr[i];
            end*=arr[n-i-1];
            ans = max(ans, max(start, end));
        }
    return ans;
}

};