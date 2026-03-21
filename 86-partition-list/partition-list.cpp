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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less_head = new ListNode(0);
        ListNode* greater_head = new ListNode(0);

        ListNode* less = less_head;
        ListNode* greater = greater_head;

        ListNode* curr = head;
        while(curr){
            ListNode* nextnode = curr->next;
            curr->next = NULL;
            if(curr->val < x){
                less->next = curr;
                less=less->next;
            }
            else{
                greater->next = curr;
                greater=greater->next;
            }
            curr=nextnode;
        }
        // now we have our 3 lists ready as per our needs 
        greater->next = NULL;
        less->next = greater_head->next;

        ListNode* newHead = less_head->next;
        delete less_head;
        delete greater_head;
        return newHead;
        
    }
};