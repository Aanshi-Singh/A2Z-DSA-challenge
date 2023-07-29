//brute: 

int countDigits(int n){
	// Write your code here.
	int num = n;
	int count = 0;
	while(n>0){
		if(n%10==0){
			n/=10;
		}
		else if(num%(n%10)==0){
			count+=1;
			n/=10;
		}
		else n/=10;
	}
	return count;	
}

//o(n), o(1)
//------------------------------------------------
//sol 2:

    string x = to_string(n);
    return x.length(); 

//o(1), o(1)
//------------------------------------------------

//sol 3:
    int digits = floor(log10(n) + 1);
    return digits;

    /*
    n = 12345
    log10(12345) = 4.091
    Integral part of 4.091 is 4 and 4 + 1 =  5 which is also the number of digits in 12345  
    */
    
//o(1), o(1)