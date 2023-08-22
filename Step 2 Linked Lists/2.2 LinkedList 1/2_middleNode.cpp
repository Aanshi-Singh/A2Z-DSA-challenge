/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        count = count/2;
        temp = head;
        while(temp!=NULL && count>0){
            temp = temp->next;
            count--;
        }
        return temp;

    }
};

//sol 2: 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* small = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next !=NULL){
            fast = fast->next->next;
            small = small->next;
        }
        return small;

    }
};