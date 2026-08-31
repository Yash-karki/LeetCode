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
        vector<int> ans = {-1,-1};
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
            return ans;
        }
        ListNode* curr = head->next;
        ListNode* prev = head;
        int pos = 1;
        int first = -1;
        int last = -1;
        int minDist = INT_MAX;

        while(curr->next != nullptr){
            ListNode* next = curr->next;
            if((curr->val > next->val && curr->val > prev->val) || (curr->val < prev->val && curr->val < next->val)){
                if(first == -1){
                    first = pos;
                }else{
                    minDist = min(minDist, pos-last);
                }
                last = pos;
            }
            prev = curr;
            curr = next;
            pos++;
        }
        if(first == last){
            return ans;
        }
        ans[0] = minDist;
        ans[1] = last - first;
        return ans;
    }
};