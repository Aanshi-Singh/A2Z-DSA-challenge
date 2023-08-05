class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto &it : mp){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};

// optimal sol 
// XOR all the elements as it will cancel out the repeating ones
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorNum = 0; 
        for(int i = 0; i<nums.size(); i++){
            xorNum = xorNum^nums[i];
        }
        return xorNum;
    }
};

