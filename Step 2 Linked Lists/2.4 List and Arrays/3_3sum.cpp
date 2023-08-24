class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i = 0; i<n; i++){
            if(i!=0 && nums[i-1] == nums[i]){
                continue;
            }
            int st = i+1,en = n-1;
            
            while(st<en){
                int sum = nums[i] + nums[st]+ nums[en];
                if(sum<0){
                    st++;
                }
                else if(sum>0){
                    en--;
                }
                else{
                    vector<int> temp = {nums[i], nums[st], nums[en]};
                    ans.push_back(temp);
                    st++; en--;
                    while(st<en && nums[st-1] == nums[st]) st++;
                    while(st< en && nums[en+1] == nums[en]) en--;
                    
                }
                
            }
        }
        // vector<vector<int>> ans(st.begin() st.end());
        return ans;
    }
};