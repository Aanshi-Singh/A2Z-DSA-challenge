void vect(vector<int> &vec, int x){
    if(x==1){
        vec.push_back(1);
        return;
    }
    vect(vec, x-1);
    vec.push_back(x);

}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> vec;
    vect(vec, x);
    return vec;
}