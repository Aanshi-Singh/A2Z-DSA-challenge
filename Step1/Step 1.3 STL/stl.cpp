#include<bits/stdc++.h>
using namespace std;

void pairTUT(){
    pair<int,int>p = {1,2};
    cout<<p.first<<" "<<p.second<<endl; //1 2
    pair<int,pair<int,int>> p2 = {1,{3,4}};
    cout<<p.first<<" "<<p2.second.first<<endl;//1 3

    pair<int, int> arr[] = {{1,2}, {3,4},{5,6}};
    cout<<arr[1].first<<endl;//3
}

int main(){

    //Pairs
    pairTUT();
    
 
}