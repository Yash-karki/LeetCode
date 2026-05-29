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
    ListNode* removeElements(ListNode* head, int val) {

        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        if (head == nullptr) return nullptr;

        ListNode* temp1 = head;
        
        while(temp1->next != nullptr){
            if(temp1->next->val == val){
                ListNode* temp2 = temp1->next;
                temp1->next = temp1->next->next;
                delete temp2;
            }
            else{
                temp1 = temp1->next;
            }
        }
        return head;
    }
};