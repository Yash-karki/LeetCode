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
        ListNode* prev=head, *temp=head->next;
        int maxi=-1, mini=INT_MAX;
        int count=1;
        vector<int> last;
        while(temp->next){
            if((temp->val<prev->val && temp->val<temp->next->val) || 
            (temp->val>prev->val && temp->val>temp->next->val)){
                if(last.size()>=1){
                    mini=min(mini, count-last.back());
                    maxi=max(maxi, count-last[0]);
                }
                last.push_back(count);
            }
            count++;
            temp=temp->next;
            prev=prev->next;
        }
        for(int val:last) cout<<val<<" ";
        if(last.size()<=1){
            return {-1, -1};
        }
        return {mini, maxi};
    }
};