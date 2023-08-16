int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int l = 0;
    int r = n-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == k){
            return mid;
        }

        //if left is sorted
        if(arr[l]<=arr[mid]){
            if(arr[l]<=k && k<=arr[mid]){
                r = mid -1;
            }
            else{
                l = mid+1;
            }
        }

        else{
            if(arr[r]>=k && k>=arr[mid]){
                l = mid+1;
            }
            else{
                r = mid -1;
            }
        }
    }
    return -1;
}
