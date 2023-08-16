class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        bool ans = false;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target) return true;

            if(nums[l] == nums[mid] && nums[mid] == nums[r]){
                l+=1;
                r-=1;
                continue;
            }

            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && nums[mid]>=target){
                r = mid -1;
            }
            else l = mid+1;
            }
            else {
                if(nums[r]>=target && target>=nums[mid]){
                    l = mid+1;
                }
                else r= mid -1;
            }
        }
        return ans;
    }
};