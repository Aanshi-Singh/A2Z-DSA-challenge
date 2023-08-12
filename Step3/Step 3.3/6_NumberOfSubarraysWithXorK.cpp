int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        
        for(int j = i; j < n; j++){
            int xorr = 0;
            for (int k = i; k <= j; k++) {
              xorr = xorr ^ a[k];
            }
            
            if (xorr == b) {
              count += 1;
            }
        }
    }
    return count;
}
//-----------------------------------------------------------
// sol 2

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        int xorr = 0; 
        for(int j = i; j < n; j++){
            xorr = xorr ^ a[j];
            if (xorr == b) {
              count += 1;
            }
        }
    }
    return count;
}
//================================================================
// sol 3:
#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int count = 0;
    map<int,int> mpp;
    int xorr = 0;
    mpp[0]=1;
    for(int i = 0; i < n; i++){
        xorr^=a[i];

        int x = xorr^b;

        count+=mpp[x];

        mpp[xorr]++;
    }
    return count;
}