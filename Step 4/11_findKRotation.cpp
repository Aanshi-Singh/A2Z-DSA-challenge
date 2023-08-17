#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here. 
       int l = 0;
       int r = arr.size()-1;
       int ans = INT_MAX;
       int ind = -1;

       while(l<=r){
           int mid = (l+r)/2;

           if(arr[l]<=arr[r]){
               if(arr[l]<ans){
                   ans = arr[l];
                   ind = l;
               }
               break;
           }

           if(arr[l]<=arr[mid]){
               if(arr[l]<ans){
                   ind = l;
                   ans = arr[l];
               }

               l = mid+1;
           }

           else{
               if(arr[mid]<ans){
                   ind = mid;
                   ans = arr[mid];
               }
               r = mid-1;
           }
       }
    return ind;
}