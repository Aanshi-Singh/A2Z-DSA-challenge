#include<bits/stdc++.h>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &nums1, vector<long long> &nums2){
	// Write your code here.
        int m = nums1.size()-1;
        int n = 0;
        while(m>=0 && n<nums2.size()){
            if(nums1[m]>nums2[n]){
                swap(nums1[m],nums2[n]);
                n++; m--;  
            }
            else{
                break;
            }
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        return;
}