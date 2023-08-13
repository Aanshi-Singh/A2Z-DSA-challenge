#include <bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector<int> a) {
  // Write your code here
  int n = a.size();
  vector<int>mpp(n+1, 0);
  for(auto &it:a){
    mpp[it]++;
  }
  int x = -1, y = -1;
  for(int i = 1; i<=n; i++){
    if(mpp[i] == 0){
      y = i;
    }
    else if(mpp[i]== 2){
      x = i;
    }
  }
  vector<int>ans = {x,y};
  return ans;

}

//----------------------------------------
// sol 2: Merge sort
int merge(vector<int>&a, int left,int mid, int right){
    vector<int> temp;
    int l = left;
    int r = mid+1;

    int count = 0;

    while(l<=mid && r<=right){

        if(a[l]<=a[r]){
            temp.push_back(a[l]);
            l++;
        }
        else {
            temp.push_back(a[r]);
            count+= (mid-l+1);
            r++;

        }
    }

    while(l<=mid){
        temp.push_back(a[l]);
            l++;
    }
    while(r<=right){
        temp.push_back(a[r]);
        r++;
    }

    for(int i = left; i<=right; i++){
        a[i] = temp[i-left];
    }
    return count;
}

int mergesort(vector<int>&a, int left, int right){
    int count = 0;
    if(left>=right){
        return count;
    }
    int mid = (left+right)/2;
    count+= mergesort(a, left, mid);
    count+= mergesort(a, mid+1, right);
    count+= merge(a, left, mid, right);
    return count;
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    return mergesort(a, 0, n-1);
    
}