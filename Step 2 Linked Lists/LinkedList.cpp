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

void headDeletion(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    if(head == NULL) return;

    if(head->next == NULL){
        headDeletion(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
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
    headDeletion(head);
    deletion(head, 5);
    display(head);





    return 0;
}