//leetCode

class Solution {
public:
    int reverse(int x) {

        int long num = 0;
        while(x){
            int ones = x%10;
            num= num*10+ones;
            if(num>pow(2,(31))-1 || num<-(pow(2,31))){
                return 0;
            }
            x/=10;
        }
        return num;
    }
};

//o(n), o(1)