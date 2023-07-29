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
