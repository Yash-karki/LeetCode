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
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* even = head->next;
        ListNode* odd = head;
        ListNode* eveHead = even;
        while(even != nullptr && even->next != nullptr && odd!= nullptr && odd->next!=nullptr){
            odd->next = even->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next;
        }
        odd->next = eveHead;
        return head;
    }
};