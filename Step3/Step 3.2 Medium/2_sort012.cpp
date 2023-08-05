sol 1:
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i<n; i++){
        switch(arr[i]){
            case 0:
                count0+=1;
                break;
            case 1:
                count1+=1;
                break;
            case 2:
                count2+=1;
                break;

            default:
            break;
        }
    }
    int i = 0;
    while(i<count0){
        arr[i] = 0;
        i++;
    }
    while(i<count1+count0){
        arr[i] = 1;
        i++;
    }
    while(i<count2+count0+count1){
        arr[i] = 2;
        i++;
    }
}

// o(n), o(1)
//------------------------------------------
// sol no. 2: 
//using Dutch flag algo 

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low = 0; int mid=0; int high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;mid++;
        }
        else if(arr[mid] == 1) mid++;
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
// o(n), o(1)


