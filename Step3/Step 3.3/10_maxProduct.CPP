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

// sol 2 /

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int pro1 = arr[0], pro2 = arr[0], n = arr.size();
        int ans = arr[0];
        for(int i = 1; i < n; i++){
            int temp = max({arr[i], arr[i]*pro1, arr[i]*pro2});
            pro2 = min({arr[i], arr[i]*pro2, arr[i]*pro1});
            pro1 = temp;
            ans = max(ans, temp);
        }
        return ans;
    }
    
};