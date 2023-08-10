// sol 1 (not reccomended)
#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    
    vector<int>temp;
    set<vector<int>> st;
    // Write your code here.
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>>ans(st.begin(), st.end());

    return ans;
}

// sol 2:
#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;
    // Write your code here.
    for(int i = 0; i<n; i++){
            set<int>tempst;
        for(int j = i+1; j<n; j++){
           
           int rem = 0-arr[i]-arr[j];

           if(tempst.find(rem) != tempst.end()){
               vector<int>temp = {arr[i], arr[j], rem};
               sort(temp.begin(), temp.end());
               st.insert(temp);
           }
           tempst.insert(arr[j]);
        }    
    }
    vector<vector<int>>ans(st.begin(), st.end());

    return ans;
}

// sol 3 : Best Sol

#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n; i++){

        if(i !=0 && arr[i] == arr[i-1]) continue;
        int j = i+1, k = n-1;

        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum == 0){
                vector<int>temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);

                j++; k--;
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
                
            }
            else if(sum>0){
                k--;
            }
            else j++;

        }
    }
    

    return ans;
}

// o(n^2) o(1)