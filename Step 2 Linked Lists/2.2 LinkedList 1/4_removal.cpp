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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        int len = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            len++;
        }
        if(len == n) return head->next;
        temp = head;
        int count = len-n;
        int pos = 1;
        while(pos<count){
            temp = temp->next;
            pos++;
        }

        ListNode*todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        
        return head;
    }
};
