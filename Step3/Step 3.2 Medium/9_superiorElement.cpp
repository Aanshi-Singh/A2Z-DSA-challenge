// sol no. 1:

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>ans;
    set<int> st; 
    int n = a.size();
    for(int i = n-1; i>=0; i--){
        bool flag = true;
        for(int j = i+1; j<n; j++){
            if(a[j]>a[i]) {
                flag = false;
                break;
            }
        }
        if(flag) st.insert(a[i]); 
    }
    for(auto &it : st){
        ans.push_back(it);
    }
    return ans;
}

// sol no. 2:

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>ans;
    set<int> st;
    int n = a.size();
    int max_ele = a[n-1];
    st.insert(max_ele);
    for(int i = n-2; i>=0; i--){
        if(a[i]>max_ele){
            max_ele = a[i];
            st.insert(max_ele);
        }
    }
    for(auto &it : st){
        ans.push_back(it);
    }

    return ans;
}