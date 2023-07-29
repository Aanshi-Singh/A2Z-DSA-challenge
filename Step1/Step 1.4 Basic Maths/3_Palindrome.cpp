class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        int long num = 0;
        while(y>0){
            num= num*10 + y%10;
            y/=10;
        }
        if(num==x){
            return true;
        }
        return false;
    }
};

//--------------------------------------------------
// sol 2:

string st = to_string(x);
        for(int i = 0; i<st.length()/2; i++){
            if(st[i]!= st[st.length()-1-i]){
                return false;
            }
        }
        return true;

//o(n), o(1)