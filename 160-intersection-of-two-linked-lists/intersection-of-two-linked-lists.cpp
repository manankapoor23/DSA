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
        map<ListNode* ,int> mpp;
        ListNode* temp = headA;
        while(temp!=NULL){
            mpp[temp]=1;
            temp=temp->next;
        }
        // traverse the second list 
        ListNode*  temp2 = headB;
        ListNode* ans = NULL;
        while(temp2!=NULL){
            if(mpp[temp2]==1){
                ans = temp2;
                break;
            }
            temp2=temp2->next;
        }
        return ans;
        
    }
};