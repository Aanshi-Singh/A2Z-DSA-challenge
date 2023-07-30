bool pal(string str, int n, int i){
    if(i>(n+1)/2){
        return true;
    }
    if(str[n] != str[i]) return false;
    return pal(str, n-1, i+1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.length();
    if(pal(str, n-1, 0)) return true;
    return false;
}