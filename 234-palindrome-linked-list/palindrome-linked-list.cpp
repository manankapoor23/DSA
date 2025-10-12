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
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next){
            return true;
        }
        stack<int> st;
        ListNode* temp = head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* slow = head;
        while(slow){
            if(slow->val!=st.top()){
                return false;
            }
            slow=slow->next;
            st.pop();
        }
        return true;
        
    }
};