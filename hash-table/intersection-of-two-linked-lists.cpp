/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr){
            return nullptr;
        }
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int sizeA = 0;
        int sizeB = 0;
        while(temp1 != nullptr){
            temp1 = temp1->next;
            sizeA++;
        }
        temp1 = headA;
        while(temp2 != nullptr){
            temp2 = temp2->next;
            sizeB++;
        }
        temp2 = headB;
        if(sizeA > sizeB){
            while(sizeA != sizeB && temp1 != nullptr){
                temp1 = temp1->next;
                sizeA--;
            }
        }else if(sizeB>sizeA){
            while(sizeB != sizeA && temp2 != nullptr){
                temp2 = temp2->next;
                sizeB--;
            }
        }
        while(temp1 != temp2 && temp1 != nullptr && temp2 != nullptr){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};