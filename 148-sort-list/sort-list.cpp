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
private:
    ListNode* mergeList(ListNode* l1 , ListNode* l2){
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1 == NULL && l2==NULL ){
            return NULL;
        }
        ListNode* head ;
        if(l1->val <= l2->val){
            head = l1;
            l1=l1->next;
        }
        else{
            head = l2;
            l2=l2->next;
        }
        ListNode* curr = head;
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                curr->next  = l1;
                l1=l1->next;
            }
            else{
                curr->next = l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1){
            curr->next = l1;
        }
        else{
            curr->next = l2;
        }
        return head;
    }
    ListNode* split_half(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            fast=fast->next->next;
            if(fast){
                slow = slow->next;
            }
        }
        ListNode* temp = slow->next;
        slow->next = NULL;
        return temp;
    }
    ListNode* mergeSort(ListNode* head){
        if(!head || !head->next){
            return head;
        }
        ListNode* second_half = split_half(head);
        head = mergeSort(head);
        second_half = mergeSort(second_half);

        return mergeList(head,second_half);
    }
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
        
    }
};