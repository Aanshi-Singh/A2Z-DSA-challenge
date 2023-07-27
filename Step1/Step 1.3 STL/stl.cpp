#include<bits/stdc++.h>
using namespace std;

void pairTUT(){
    pair<int,int>p = {1,2};
    cout<<p.first<<" "<<p.second<<endl; //1 2
    pair<int,pair<int,int>> p2 = {1,{3,4}};
    cout<<p.first<<" "<<p2.second.first<<endl;//1 3

    pair<int, int> arr[] = {{1,2}, {3,4},{5,6}};
    cout<<arr[1].first<<endl;//3
}

void vectorTUT(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);//faster than push back

    vector<pair<int, int>> vec;
    
    vec.push_back({1,2});
    vec.emplace_back(3,4);//pairs can be pushed without {}

    vector<int> v2(5,100); // 100 100 100 100 100

    vector<int> v3(5);

    vector<int>v4(v2);

    //iterating vector
    vector<int>::iterator it = v2.begin();
    it++;
    cout<<*(it)<<" ";

    it+=2;
    cout<<*(it)<<" ";

    cout<<endl;
    vector<int>::iterator it = v2.end();// [10,20,30,40] v.end will not return 40, it is beyong 40

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back();

    for(auto it = v2.begin(); it!= v2.end(); it++){
        cout<<*(it); // 100 100 100 100 100
    }

    for(auto it: v2){
        cout<<it; // 100 100 100 100 100
    }

    //erase(st, end)
    //v = [1,2,3,4]
    v.erase(v.begin()+1);// 1 3 4 
    v.erase(v.begin()+1, v.begin()+3);// 1

    //insert 
    v2.insert(v2.begin(), 300);//300 100 100 100 100 100

    v2.insert(v2.begin()+1, 2, 50);// 300 50 50 100 100 100 100 100
    //copy v2 in v1;
    v1.insert(v.begin(), v2.begin(), v2.end());

    //size
    v.size()

    //swap
    v.swap(v1);

    //clear
    v.clear()

    //pop back
    v.pop_back();// [10,20] --> [10]

    v.empty()// returns true / false
}

void listTUT(){
 list<int> ls;
 ls.push_back(1);// {1}
 ls.emplace_back(2);//{1,2}

 ls.push_front(-1);// {-1 1 2}
 // insert in vector is costlier than push_front in list
//rest same as vec -> size, clear , begin, end, swap
}

void dequeTUT(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5); // 5 4 1 2

    dq.pop_back();//5 4 1
    dq.pop_front();//4 1

    dq.back();
    dq.front();
    }

void stackTUT(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5); // 5 3 2 1

    cout<<st.top(); // 5
    // st[2] is invalid
    st.pop();//st = 3 2 1
    st.size();
    st.empty();// T OR F

    stack<int> st1, st2;
    st1.swap(st2);
}

void queueTUT(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3); // 1 2 3

    q.back()+=5;
    cout<<q.back();// 8  q--> 1 2 8

    cout<<q.front();// print 1
    q.pop();// 2 8
    q.size();
    q1.swap(q2)
}

void priorityQueuetut(){
    priority_queue<int>pq; // max heap
    pq.push(1);
    pq.push(2);
    pq.push(3);// 3 2 1
    cout<<pq.top();//3
    pq.pop(); // 2 1

    //minimum HEAP
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(4);
    pq.push(7);// 4 5 
    cout<<pq.top();// 4
}
void setTUT(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(3); // 1 2 3 4

    auto it = st.find(3);// returns the iterator
    st.erase(2); // erases 2, if the element is not present in the set , the iterator will return st.end()

    int cnt = st.count(3);// return 1 or 0 (present in the set or not)

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

int main(){

    //Pairs
    pairTUT();

    //Vectors
    vectorTUT();

    //Lists
    listTUT();
    
    //dequeue
    dequeTUT();

    //stack LIFO
    stackTUT();

    //Queue FIFO
    queueTUT();

    //priority queue
    priorityQueuetut();// the largest element stays on the top, the data is not strored linearly it is stored in a tree fashion
 
    //sets -> stores elements in sorted and unique order
    setTUT(); // pop, top, push --> log(n)
}