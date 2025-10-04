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
        if(head==NULL){
            return head;
        }

        int len =0;
        ListNode* x = head ; // start a pointer at head of the list 
        while(x!=NULL){
            len++;
            x = x->next; // calculate the number of nodes 
        }
        if(n==len){
            // means deleting head only 
            ListNode* todel = head ;
            head = head->next;
            delete todel;
            return head ;
        }
        ListNode* temp = head ;
        for(int i =1;i<len-n;i++){
            // i stops at i<3 which is after 2 times temp=temp->next
            temp=temp->next; // find just before to deletion
        }
        ListNode* todelete = temp->next;
        temp->next = todelete->next;
        delete todelete;

        return head; 
        
    }
};