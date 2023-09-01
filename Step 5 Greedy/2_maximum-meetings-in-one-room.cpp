//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
struct meeting{
    int start;
    int end;
    int pos;
};

class Solution{
public:
    
    static bool comp(struct meeting m1, struct meeting m2){
        if(m1.end<m2.end) return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos < m2.pos) return true;
        return false;
    }

    vector<int> maxMeetings(int n,vector<int> &s,vector<int> &f){
        struct meeting meet[n];
        for(int i = 0; i<n; i++){
            meet[i].start = s[i];
            meet[i].end = f[i];
            meet[i].pos = i+1;
        }
        
        sort(meet, meet+n, comp);
        
        int endLimit = meet[0].end;
        vector<int>ans = {meet[0].pos};
        
        for(int i = 1; i<n; i++){
            if(meet[i].start>endLimit){
                ans.push_back(meet[i].pos);
                endLimit = meet[i].end;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends