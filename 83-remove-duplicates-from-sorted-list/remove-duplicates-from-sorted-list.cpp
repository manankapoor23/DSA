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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            if(fast->val==fast->next->val){
                fast->next=fast->next->next;

            }else{
                fast=fast->next;
            }
            
        }
        return head;
    }
};