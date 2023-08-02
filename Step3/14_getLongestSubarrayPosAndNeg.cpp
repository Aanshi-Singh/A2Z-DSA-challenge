#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    int len = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum+=nums[j];
            if(sum == k){
                len= max(len, j-i+1);
            }
        }
    }
    return len;
}