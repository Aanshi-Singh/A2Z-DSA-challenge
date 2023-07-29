bool checkArmstrong(int n){
	//Write your code here
	string x = to_string(n);
	int len = x.length();
	int num = n;
	int long newNum = 0;
	while(n>0){
		newNum+=pow(n%10, len);
		n=n/10;
	}
	if(newNum == num) return true;
	return false;
}
//o(n), o(1)