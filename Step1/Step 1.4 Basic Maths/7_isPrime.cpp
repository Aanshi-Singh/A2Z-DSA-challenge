// sol 1:
bool isPrime(int n)
{
	// Write your code here.
	if(n==0){
		return false;
	}
	else if(n == 1){
		return false;
	}
	else{
		for(int i = 2; i<=n; i++){
			if(n%i == 0){
				return false;
			}
		}
		return true;
	}
}

// o(n),o(1)
//---------------------------------------------
// sol 2: 

bool isPrime(int n)
{
	// Write your code here.
	if(n==0){
		return false;
	}
	else if(n == 1){
		return false;
	}
	else{
		for(int i = 2; i<=sqrt(n); i++){
			if(n%i == 0){
				return false;
			}
		}
		return true;
	}
}

// o(root n), o(1)