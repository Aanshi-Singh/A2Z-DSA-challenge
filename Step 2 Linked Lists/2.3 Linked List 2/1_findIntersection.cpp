/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int len(ListNode * head){
        int count = 0;
        while(head){
            count+=1;
            head = head->next;  
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = len(headA);
        int l2 = len(headB);
        int d = 0;
        ListNode *ptr1;
        ListNode *ptr2;
        if(l1>l2){
            d = l1-l2;
            ptr1 = headA;
            ptr2 = headB;
        }
        else{
            d = l2-l1;
            ptr1 = headB;
            ptr2 = headA;
        }
        while(d){
            
            ptr1 = ptr1->next;
            if(ptr1 == NULL) return NULL;
            d--;
        }

        while((ptr1 != ptr2) && ptr1 && ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        return ptr1;

    }
};