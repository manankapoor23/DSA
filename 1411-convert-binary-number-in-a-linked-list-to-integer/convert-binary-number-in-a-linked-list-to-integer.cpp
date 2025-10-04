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
    int getDecimalValue(ListNode* head) {
        int size = 1 ;
        ListNode* temp = head;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        ListNode* check = head;
        int sum = 0 ;
        int i = size-1;
        while(i>=0){
            int value = check->val;
            if(value==1){
                sum+=pow(2,i);
            }
            i--;
            check=check->next;
        }

        return sum ;
    }
};