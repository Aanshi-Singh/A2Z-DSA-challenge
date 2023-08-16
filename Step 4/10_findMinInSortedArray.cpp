int findMin(vector<int>& nums)
{
	// Write your code here.
	int n = nums.size();
        int l = 0;
        int r = n-1;
        int mini = INT_MAX;
        
        while(l<=r){
            int mid = (l+r)/2;
        
            if(nums[l]<= nums[r]){ 
                mini = min(nums[l], mini);
                break;
            }

            if(nums[l]<=nums[mid]){
                mini = min(mini, nums[l]);
                l = mid+1;
            }
            else{
                mini = min(mini, nums[mid]);
                r = mid-1;
            }
        }
        return mini;
}