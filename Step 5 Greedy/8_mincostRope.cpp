//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long>>dq;
        
        for(int i = 0; i<n; i++){
            dq.push(arr[i]);
        }
        
        long cost = 0;
        while(dq.size()>1){
            long first = dq.top();
            dq.pop();
            
            long second = dq.top();
            dq.pop();
            
            cost+= first + second;
            
            dq.push(first+second);
        }
        return cost;
        
    }
};

