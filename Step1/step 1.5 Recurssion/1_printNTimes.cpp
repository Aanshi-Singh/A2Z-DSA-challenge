#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void rec(){

    //base condition
    if(cnt==3){
        return;
    }
    //small operation to be performed
    cout<<cnt+1<<" ";
    cnt++;
    //recursively call the function
    rec();
}


int main(){
    rec();
    return 0;
}


// problem code:
void vect(vector<int> &vec, int x){
    if(x==1){
        vec.push_back(1);
        return;
    }
    vect(vec, x-1);
    vec.push_back(x);

}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> vec;
    vect(vec, x);
    return vec;
}