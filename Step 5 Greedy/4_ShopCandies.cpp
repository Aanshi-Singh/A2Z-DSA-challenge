// brute
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        int st = 0;
        int en = N-1;
        int mini = candies[0];
        for(int i = 1; i<N; i++){
            en-=K;
            if(i<=en){
            mini += candies[i];
            }
            else{
                break;
            }
        }
       int maxi = candies[N-1];
       for(int i = N-2; i>=0; i--){
           st+=K;
           if(i>=st){
            maxi += candies[i];
            }
            else{
                break;
            }
       }
       
       vector<int> ans = {mini, maxi};
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends

//better:
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        int st = 0;
        int en = N-1;
        int mini = candies[0];
        for(int i = 1; i<N; i++){
            en-=K;
            if(i<=en){
            mini += candies[i];
            }
            else{
                break;
            }
        }
       int maxi = candies[N-1];
       for(int i = N-2; i>=0; i--){
           st+=K;
           if(i>=st){
            maxi += candies[i];
            }
            else{
                break;
            }
       }
       
       vector<int> ans = {mini, maxi};
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends