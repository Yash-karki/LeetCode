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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1;
        stack<int> st2;
        
        while(l1){
            st1.push(l1->val);
            l1 = l1->next;
        }

        while(l2){
            st2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        int val1,val2;    
        ListNode* head = nullptr;    
        while(!st1.empty() || !st2.empty() || carry){
            if(!st1.empty()){
                val1 = st1.top();
                st1.pop();
            }else{
                val1 = 0;
            }
            if(!st2.empty()){
                val2 = st2.top();
                st2.pop();
            }else{
                val2 = 0;
            }
            int sum = val1+val2+carry;
            carry = sum/10;
            int digit = sum%10;

            ListNode* newNode = new ListNode(digit);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};