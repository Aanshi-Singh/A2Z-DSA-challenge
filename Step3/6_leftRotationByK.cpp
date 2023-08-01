// sol 1: 

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        if(k>n) return;
        vector<int>temp;
        for(int i = n-k; i<n; i++){
            temp.push_back(arr[i]);
        }
        for(int i = 0; i<n-k; i++){
            temp.push_back(arr[i]);
        }

        for(int i = 0; i<n; i++){
            arr[i] = temp[i];
        }
        }
    
};

//--------------------------------------
// sol 2:
class Solution {
public:
    void reverse(vector<int> &arr, int st, int en){
        while(st<en){
            int temp = arr[st];
            arr[st] = arr[en];
            arr[en] = temp;
            st++;en--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        if(k>n) return;
        reverse(arr, 0, n-k-1);
        reverse(arr, n-k, n-1);
        reverse(arr, 0, n-1);
        }
    
};