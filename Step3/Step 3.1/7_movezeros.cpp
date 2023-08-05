vector<int> moveZeros(int n, vector<int> a) {
    if(n == 1) return a;
    // Write your code here.
    int count = 0;
    vector<int> temp;
    for(int i = 0; i<n; i++){
        if(a[i] == 0) count+=1;
        else temp.push_back(a[i]);
    }  
    while(count>0){
        temp.push_back(0);
        count--;
    }
    return temp;  
}


//--------------------------------------------
// sol 2:

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    for(int i = 0; i<n; i++){
        if(a[i] == 0 ){
            j = i;
            break;
        }
    }  
    if(j == -1){
        return a;
    }
    for(int i=j+1; i<n; i++){
        if(a[i]!= 0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}
