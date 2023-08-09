int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    long int count = 1;
    long int maxCount = INT_MIN;
    int n = a.size();
    sort(a.begin(), a.end());
    cout<<endl;
    int temp = a[0];
    for(int i = 1; i<n; i++){
        if(temp+1 == a[i]){
            count+=1;
            // cout<<temp<<endl;
            temp = a[i];
            
        }
        else if(temp != a[i]){
            count = 1;
            temp = a[i];
        }

        maxCount = max(maxCount, count);
    }

    return maxCount;
   
}


// sol 2:
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.

    int maxCount = INT_MIN;
    set<int> st;
    for(auto &it : a){
        st.insert(it);
    }
    int temp;
    int count = 1;
    for(auto &it:st){
        if(st.find(it-1)==st.end()){
            temp = it;
            count = 1;
        }

        if (st.find(it + 1) != st.end()) {
            temp = it+1;
            count += 1;
        } else{
            count = 1;
            temp = it;}
    
        maxCount = max(maxCount, count);
    }
    return maxCount;
   
}