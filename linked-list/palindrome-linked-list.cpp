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
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *previous = nullptr;
        ListNode *current = slow->next;

        while(current){
            ListNode *nextNode = current->next;
            current->next = previous;
            previous = current;
            current = nextNode;

        }
        ListNode *temp1 = head;
        ListNode *temp2 = previous;

        while(temp2){
            if(temp1->val!=temp2->val){
                return false;
        
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};