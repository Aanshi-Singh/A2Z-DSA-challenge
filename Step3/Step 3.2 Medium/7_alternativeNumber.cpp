vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int>positives;
    vector<int>negatives;
    vector<int> ans;
    for(auto &it : a){
        if(it>0) positives.push_back(it);
        else negatives.push_back(it);
    }
    int x = 0;
    int y = 0;
    int i = 0;
    while(x<positives.size() && y<negatives.size()){
        if(i%2==0){
            ans.push_back(positives[x]);
            x++;
        }
        else{
            ans.push_back(negatives[y]);
            y++;
        }
        i++;
    }

    while(x<positives.size()){
        ans.push_back(positives[x]);
        x++;
    }
    while(y<negatives.size()){
        ans.push_back(negatives[y]);
        y++;
    }

    return ans;
}
//----------------------------------------------
// sol no.: 2

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int>positives;
    vector<int>negatives;
    for(auto &it : a){
        if(it>0) positives.push_back(it);
        else negatives.push_back(it);
    }
    
    for(int i = 0; i<a.size()/2; i++){
        a[i*2] = positives[i];
        a[i*2+1] = negatives[i];
    }

    return a;
}

// o(n+n/2), o(n/2)

// sol 3:

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int>ans(n,0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i<n; i++){
        if(a[i]>0){
            ans[posIndex] = a[i];
            posIndex+=2;
        }
        else {
            ans[negIndex] = a[i];
            negIndex+=2;
        }
    }
    return ans;
    
}

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int>ans(n,0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i<n; i++){
        if(a[i]>0){
            ans[posIndex] = a[i];
            posIndex+=2;
        }
        else {
            ans[negIndex] = a[i];
            negIndex+=2;
        }
    }
    return ans;
    
}

// o(n), o(n)

