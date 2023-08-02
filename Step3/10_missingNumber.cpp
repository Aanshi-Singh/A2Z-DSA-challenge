// sol 1:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<=n;i++){
            int flag =0;
            for(int j = 0; j<n; j++){
                if(nums[j] == i){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return i;
        }
        return -1;
    }    
};

// o(n^2), o(1)
//----------------------------------
// sol 2:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> vec(nums.size()+1, 0);
        for(int i = 0; i<nums.size(); i++){
            vec[nums[i]]++;
        }
        for(int i = 0; i<nums.size()+1; i++){
            if(vec[i] == 0){
                return i;
            }
        }
        return -1;
    }    
};
// o(n), o(n)

// -----------------------------------------------------
// sol 3:

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int sumArr = 0;
        for(int i = 0; i<n; i++){
            sumArr+=nums[i];
        }
        return sum - sumArr;
    }
};

// o(n), o(1)