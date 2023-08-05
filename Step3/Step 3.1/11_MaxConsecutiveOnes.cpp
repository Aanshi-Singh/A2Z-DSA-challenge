class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int sum = 0;
        int ans = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i] == 1){
                sum++;
            }
            else{
                sum = 0;   
            }
            ans = max(ans, sum);
        } 
        return ans;
    }
};
// o(n), o(1)