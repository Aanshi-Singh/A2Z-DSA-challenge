int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int long count = 0;

    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum+=arr[j];
            if(sum == k){
                count+=1;
            }   
        }
    }
    return count;
}