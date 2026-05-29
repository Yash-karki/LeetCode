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
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* temp = head;
        while (temp->next != nullptr) {
            int a = temp->val;
            int b = temp->next->val;
            ListNode* x = new ListNode{findGCD(a, b), nullptr};
            x->next = temp->next;
            temp->next = x;
            temp = temp->next->next;
        }
        return head;
    }
};