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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dum = new ListNode(-1);
        dum->next = head;
        ListNode* curr = dum;
        ListNode* prev = dum;
        ListNode* nxt = dum;

        ListNode* temp = head;
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }

        while(count>=k){
            curr = prev->next;
            nxt = curr->next;
            for(int i = 1; i<k; i++){
                curr->next = nxt->next;
                nxt->next = prev->next;
                prev->next = nxt;
                nxt = curr->next;
            }
            count-=k;
            prev = curr;
        }
        return dum->next;
    }

};