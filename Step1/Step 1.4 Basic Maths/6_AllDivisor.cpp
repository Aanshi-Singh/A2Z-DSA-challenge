// sol 1: 
vector<int> printDivisors(int n) {
    // Write your code here
    vector<int> vec;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            vec.push_back(i);
        }
    }
    return vec;
}
// o(n), o(1)
//----------------------------------------
//sol 2:
vector<int> printDivisors(int n) {
    // Write your code here
    vector<int> vec;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i == 0){
            vec.push_back(i);
            if(i != n/i){
                vec.push_back(n/i);
            }
        }
    }
    sort(vec.begin(), vec.end());;
    return vec;
}

// o(root n), o(1)