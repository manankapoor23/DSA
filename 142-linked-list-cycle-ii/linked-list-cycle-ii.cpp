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
        // int LoopLen(ListNode* head){
        //     ListNode* fast = head;
        //     ListNode* slow = head;
        //     while(fast!=NULL&&fast->next!=NULL){
        //         slow = slow->next;
        //         fast=fast->next->next;
        //         if(slow==fast){
        //             int count = 1;
        //             while(fast!=slow){
        //                 count++;
        //                 fast=fast->next;
        //             }
        //             return count;
        //         }
        //     }
        //     return 0 ;
        // }
    

    ListNode *detectCycle(ListNode *head) {
            ListNode* fast = head;
            ListNode* slow = head;
            while(fast!=NULL&&fast->next!=NULL){
                slow = slow->next;
                fast=fast->next->next;
                if(slow==fast){
                    slow = head;
                    while(slow!=fast){
                        slow=slow->next;
                        fast=fast->next;
                    }
                    return slow;
                }
            }
            return nullptr;


    }
};