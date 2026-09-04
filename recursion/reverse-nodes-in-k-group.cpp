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

    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        
    }

    ListNode* solve(ListNode* temp, int k) {
        k -= 1;
        while (temp && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = nullptr;
        while (temp) {
            ListNode* knode = solve(temp, k);
            if (knode == nullptr) {
                break;
            }
            ListNode* nextNode = knode->next;
            knode->next = nullptr;
            reverse(temp);
            if (head == temp) {
                head = knode;
            } else {
                prevNode->next = knode;
            }
            prevNode = temp;
            temp->next = nextNode;
            temp = nextNode;
        }
        return head;
    }
};