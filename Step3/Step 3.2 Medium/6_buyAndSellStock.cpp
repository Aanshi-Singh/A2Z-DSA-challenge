int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    int mini = INT_MAX;
    int ans = 0;
    for(int i =0; i<n; i++){
        if(mini>prices[i]){
            mini = prices[i];
            for(int j = i+1; j<n; j++){
                if(mini<prices[j]){
                    ans = max(ans, prices[j]-mini);
                }
            }
        }
    }
    return ans;
}

// o(n^2), o(1)

//OR

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for(int j= i+1; j<n; j++){
            if(prices[j]>prices[i]){
                ans = max(ans, prices[j]-prices[i]);
            }
        }
    }
    return ans;
}


//--------------------------------------------
// sol no. 2:
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    int min_price = INT_MAX;
    int max_price = 0;
    for(int i =0; i<n; i++){
        min_price = min(prices[i], min_price);
        max_price = max(max_price, prices[i]- min_price);
    }
    return max_price;
}

// o(n), o(1)
