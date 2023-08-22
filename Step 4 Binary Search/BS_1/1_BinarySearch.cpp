// iterative method 
int n = nums.size();
        int l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return -1;

    }

//--------------------------------------

// Recursive method 
int binarySearch(vector<int> &nums, int target,int left, int right){
    if(left>right) return -1;
    int mid = (left+right) /2;
    if(nums[mid] == target) return mid;
    else if(nums[mid]>target) 
        return binarySearch(nums, target, left, mid-1);
    else
        return binarySearch(nums, target, mid+1, right);
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size()-1);

    }
};