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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* curr2 = head->next;
        while(curr2){
            int GCD = gcd(curr->val,curr2->val);
            ListNode* node = new ListNode(GCD);
            curr->next=node;
            node->next=curr2;
            curr=node->next;
            curr2=curr2->next;
        }
        return head;
        
    }
};