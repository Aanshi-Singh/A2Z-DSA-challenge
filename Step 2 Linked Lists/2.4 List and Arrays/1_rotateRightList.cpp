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

    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) return head;
        int len = 1;
        ListNode* temp = head;
        while(temp->next){
            temp = temp->next;
            len+=1;
        }
        temp->next = head;
        k = k%len;
        int n = len - k;

        // ListNode*  temp2 = head;
        while(n>0){
            temp= temp->next;
            n--;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};