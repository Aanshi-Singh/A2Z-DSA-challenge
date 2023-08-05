// sol 1: 
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> vec;
     sort(a.begin(), a.end());
     vec.push_back(a[a.size()-2]);
     vec.push_back(a[1]);
     return vec;

}

// o(n*log(n)), o(1)
// sol no. 2:
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }

    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}

// o(n), o(1)

// sol no. 3:

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> vec;
    int large = INT_MIN, secondLarge = INT_MIN;
    int small = INT_MAX, secondSmall = INT_MAX;

    for(int i = 0; i<n; i++){
        small = min(small, a[i]);
        large = max(large, a[i]);
    }
    for(int i =0; i<n; i++){
        if(a[i]>secondLarge && a[i]!= large){
            secondLarge = a[i];
        }
        if(a[i]<secondSmall && a[i]!= small){
            secondSmall = a[i];
        }
    }

    vec.push_back(secondLarge);
    vec.push_back(secondSmall);
    return vec;

}
