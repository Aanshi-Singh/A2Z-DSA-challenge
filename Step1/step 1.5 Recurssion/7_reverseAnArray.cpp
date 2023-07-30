void rev(vector<int> &vec, int n, vector<int> &nums){
    if(n==0){
        vec.push_back(nums[n]);
        return;
    }
    vec.push_back(nums[n]);
    rev(vec, n-1, nums);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int> vec;
    rev(vec, n-1, nums);
    return vec;
}
