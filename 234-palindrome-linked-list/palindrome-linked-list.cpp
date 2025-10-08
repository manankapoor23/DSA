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
        bool ans = true;
        if (!head->next) return true;
        ListNode *slow = head;
        stack<int> st;
        while(slow!=NULL){
            st.push(slow->val);
            slow=slow->next;
        }
        ListNode* trav = head;
        while(trav){
            if(trav->val!=st.top()){
                return false;
            }
            trav=trav->next;
            st.pop();
        }

        return true;


        
    }
};