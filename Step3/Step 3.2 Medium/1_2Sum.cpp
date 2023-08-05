string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(book[i]+book[j] == target){
                return "YES";
            }
        }
    }
    return "NO";
}

// o(n^2), o(1)

// sol no. 2
//---------------------------------------------
#include <bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    map<int, int>mp;
    for(int i = 0; i<n; i++){
        int rem = target-book[i];

        if(mp.find(rem)!= mp.end()){
            return "YES";
        }
        mp[book[i]] = 1;
    }
    return "NO";
}
// o(nlogn), o(n)

// SOL NO. 3:
#include <bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
   //2 pointer
   sort(book.begin(), book.end());
   int left = 0;
   int right = n-1;
   while(left<right){
       int sum = book[left]+book[right];
       if(sum == target){
           return "YES";
       }
       else if(sum>target) right --;
       else left ++;
   }
   return "NO";
}
// O(n*log(n)), o(1)