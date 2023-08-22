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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(-1);
        ListNode* ptr1 = temp;
        ListNode* ptr2 = list1;
        ListNode* ptr3 = list2;

        while(ptr2 && ptr3){
            if(ptr2->val < ptr3->val){
                ptr1->next = ptr2;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            else{
                ptr1->next = ptr3;  
                ptr1 = ptr1->next;
                ptr3 = ptr3->next;
            }
        }

        while(ptr2){
            ptr1->next = ptr2;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while(ptr3){
            ptr1->next = ptr3;  
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }

        return temp->next;
    }
};