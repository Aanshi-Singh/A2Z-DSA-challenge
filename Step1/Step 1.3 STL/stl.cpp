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

void vectorTUT(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);//faster than push back

    vector<pair<int, int>> vec;
    
    vec.push_back({1,2});
    vec.emplace_back(3,4);//pairs can be pushed without {}

    vector<int> v2(5,100); // 100 100 100 100 100

    vector<int> v3(5);

    vector<int>v4(v2);

    //iterating vector
    vector<int>::iterator it = v2.begin();
    it++;
    cout<<*(it)<<" ";

    it+=2;
    cout<<*(it)<<" ";

    cout<<endl;
    vector<int>::iterator it = v2.end();// [10,20,30,40] v.end will not return 40, it is beyong 40

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back();

    for(auto it = v2.begin(); it!= v2.end(); it++){
        cout<<*(it); // 100 100 100 100 100
    }

    for(auto it: v2){
        cout<<it; // 100 100 100 100 100
    }

    //erase(st, end)
    //v = [1,2,3,4]
    v.erase(v.begin()+1);// 1 3 4 
    v.erase(v.begin()+1, v.begin()+3);// 1

    //insert 
    v2.insert(v2.begin(), 300);//300 100 100 100 100 100

    v2.insert(v2.begin()+1, 2, 50);// 300 50 50 100 100 100 100 100
    //copy v2 in v1;
    v1.insert(v.begin(), v2.begin(), v2.end());

    //size
    v.size()
    
    //swap
    v.swap(v1);

    //clear
    v.clear()

    //pop back
    v.pop_back();// [10,20] --> [10]

    v.empty()// returns true / false
}

int main(){

    //Pairs
    pairTUT();

    //Vectors
    vectorTUT();
    
 
}