#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){ // coustructor
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);    
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr  = head;
    node* nxtptr;

    while(currptr!=NULL){
        nxtptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nxtptr;
    }
    return prevptr;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    cout<<endl;
    node* newhead = reverse(head);
    display(newhead);
    return 0;
}