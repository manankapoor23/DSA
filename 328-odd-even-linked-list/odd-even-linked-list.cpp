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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        if(temp==NULL||temp->next==NULL){
            return head;
        }
        vector<int> arr;
        while(temp!=NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            arr.push_back(temp->val);
        }
        ListNode* temp2 = head->next;
        while(temp2!=NULL && temp2->next!=NULL){
            arr.push_back(temp2->val);
            temp2=temp2->next->next;
        }
        if(temp2){
            arr.push_back(temp2->val);
        }
        int i = 0;
        ListNode* curr = head;
        while(curr!=NULL){
            curr->val=arr[i];
            i++;
            curr=curr->next;
        }
        return head;
    }
};