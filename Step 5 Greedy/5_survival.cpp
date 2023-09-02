class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        if(N<M)return -1;
        int days = S-S/7;
        int sum = 0;
        for(int i = 0; i<days; i++){
            sum+=N;
            if(sum>=M*S){
                return i+1;
            }
        }
        return -1;
    }
};]

// better
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int totalFood = M*S;
        int days = S-S/7;
        int ans = 0;
        if(totalFood%N == 0)
            ans = totalFood/N;
        else
            ans  = totalFood/N+1;
        
        if(ans<=days) return ans;
        else return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends