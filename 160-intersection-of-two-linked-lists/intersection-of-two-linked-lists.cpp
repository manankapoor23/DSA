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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pta = headA;
        ListNode* ptb = headB;

        while(pta!=ptb){
            if(pta==NULL){
                pta=headB;
            }
            else{
                pta=pta->next;
            }
            if(ptb==NULL){
                ptb = headA;
            }
            else{
                ptb=ptb->next;
            }
        }
        return pta;
        
    }
};