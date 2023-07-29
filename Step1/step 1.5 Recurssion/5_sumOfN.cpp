// sol 1

int sumN(int sum, int n){
    if(n == 0)
    return sum;
    sumN(sum+n, n-1);

}

int sumFirstN(int n) {
    // Write Your Code Here
    int sum = 0;
    return sumN(sum, n);
    
}

// sol 2

int sumN(int n){
    if(n == 0)
    return 0;
    return n+ sumN(n-1);

}

int sumFirstN(int n) {
    // Write Your Code Here
    return sumN(n);
    
}