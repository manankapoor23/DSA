class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* curr = head;
        ListNode* end = head;
        ListNode* org = head;
        if(head==NULL||head->next==NULL){
            return;
        }
        while(end!=NULL&&end->next!=NULL){
            end=end->next->next;
            curr=curr->next;
        }
        ListNode* inserter = curr->next;
        curr->next=NULL;
        // curr points to the middle node 
        stack<ListNode*> st;
        while(inserter!=NULL){
            st.push(inserter);
            inserter=inserter->next;
        }
        ListNode* a = head;
        while(!st.empty()&&org!=NULL){
            ListNode* b=st.top();
            st.pop();
            ListNode* nextfirst = a->next;
            a->next=b;
            b->next=nextfirst;
            a=nextfirst;
        }

    }
};