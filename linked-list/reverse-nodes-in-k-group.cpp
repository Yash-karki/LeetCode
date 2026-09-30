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
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || k == 1) {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head;
        ListNode* prevgrp = nullptr;
        int step = 1;
        while (second != NULL) {
            if (step != k) {
                second = second->next;
                step++;
            } else {
                ListNode* nextgrp = second->next;
                ListNode* curr = first;
                ListNode* prev = nextgrp;
                while (curr != nextgrp) {
                    ListNode* next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }

                if (prevgrp == nullptr) {
                    head = prev;
                } else {
                    prevgrp->next = prev;
                }

                prevgrp = first;
                first = nextgrp;
                second = nextgrp;
                step = 1;
            }
        }
        return head;
    }
};