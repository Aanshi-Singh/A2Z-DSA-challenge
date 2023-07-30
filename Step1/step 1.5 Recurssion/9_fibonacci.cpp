// sol 1
int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}

//------------------------------------
// sol no. 2:

vector<int> fibo(vector<int>&vec, int n){
    if(n ==1){
        vec.push_back(0);
        return vec;
    }
    if(n == 2){
        vec = fibo(vec, n-1);
        vec.push_back(1);
        return vec;
    }
    vec= fibo(vec, n-1);
    vec.push_back(vec[n-2]+vec[n-3]);
    return vec;  
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> vec;
    fibo(vec,n);
    return vec; 
}