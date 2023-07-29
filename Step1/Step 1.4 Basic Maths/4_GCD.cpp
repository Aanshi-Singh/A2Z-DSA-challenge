//sol 1: 
int calcGCD(int n, int m){
    // Write your code here.
        int ans = 0;
        for(int i = 1; i<=(min(n,m)); i++){
            if(n%i==0 && m%i == 0){
                ans = i;
            }
        }
        return ans;
    
    
}

//---------------------------------------------

// sol 2:

// Using Euclidean’s theorem.

// gcd(a,b) = gcd(b, a%b)  => till b==0 then a is gcd, and a<b

int gcd(int n, int m){
    if(m==0){
        return n;
    }
    return gcd(m, n%m);
}

int calcGCD(int n, int m){
    // Write your code here.
        if(n<m)
        return gcd(n, m);
        else return gcd(m, n);
    
}

//