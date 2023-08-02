// sol 1:

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    map< int, int >mp;
    vector<int> ans;
    for(int i= 0; i<a.size(); i++){
        mp[a[i]]++;
    }
    for(int i= 0; i<b.size(); i++){
        mp[b[i]]++;
    }

    for(auto &i : mp){
        ans.push_back(i.first);
    }
    return ans;
}

// Time Compleixty : O( (m+n)log(m+n) ) . Inserting a key in map takes logN times
//O(m+n) for ans vec

// sol 2:
#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    set<int> st;
    vector<int>  ans;
    for(int i = 0; i<a.size(); i++){
        st.insert(a[i]);
    }
    for(int i = 0; i<b.size(); i++){
        st.insert(b[i]);
    }
    for(auto &it : st){
        ans.push_back(it);
    }
    return ans;
}

// Time Compleixty : O( (m+n)log(m+n) ) . Inserting an element in a set takes logN time
// Space Complexity : O(m+n) 

// optimal sol 
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> ans;
    int i =0, j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i] == a[i-1])i++;
        else if(b[j] == b[j-1]) j++;
        else if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;j++;
        }
        else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
        }
    }
    while(i<a.size()){
        if(a[i] == a[i-1])i++;
        else {
          ans.push_back(a[i]);
          i++;
        }
    }
    while (j<b.size()) {
      if(b[j] == b[j-1]) j++;
      else {
        ans.push_back(b[j]);
        j++;
      }
    }

    return ans;
}
// O(m+n) o(1)