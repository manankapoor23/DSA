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

    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int i =1;
        vector<int> points;

        ListNode* curr = head->next;
        ListNode* prev = head;
        while(curr->next!=NULL){
            if(((curr->val > prev->val) && (curr->val > curr->next->val)) ||
            ((curr->val < prev->val) && (curr->val < curr->next->val))){
                points.push_back(i);
            }
            prev=curr;
            curr=curr->next;
            i++;
        }
        if(points.size()<2){
            return {-1,-1};
        }
        int minDist =INT_MAX;
        int maxDist = points[points.size()-1]-points[0];
        for(int i =1;i<points.size();i++){
            minDist=min(minDist,points[i]-points[i-1]);
        }
        return {minDist,maxDist};

        
    }
};