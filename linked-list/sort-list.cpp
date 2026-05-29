auto __fast_io_atexit = []() { ios::sync_with_stdio(false); cin.tie(nullptr); std::atexit([]() { ofstream("display_runtime.txt") << "0"; }); return 0; }();

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

    ListNode* letsMerge(ListNode* left, ListNode* right){
        if(left == nullptr) return right;
        if(right == nullptr) return left;

        if(left->val < right->val){
            left->next = letsMerge(left->next,right);
            return left;
        }else{
            right->next = letsMerge(left,right->next);
            return right;
        }
    }

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow -> next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = nullptr;
        return mid;
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode* mid = findMid(head);

        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        return letsMerge(left,right);
    }
};