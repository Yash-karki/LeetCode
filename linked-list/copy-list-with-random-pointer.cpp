/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;

        while(temp != nullptr){
            Node* copyNode = new Node(temp->val);
            copyNode-> next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }
        temp = head;
        while(temp != nullptr){
            Node* copyNode = temp->next;
            if(temp->random){
                copyNode->random = temp->random->next;
            }else{
                copyNode->random = nullptr;
            }
            temp = temp->next->next;
        }
        Node* dummy = new Node(0);
        Node* temp1 = dummy;
        temp = head;
        while(temp!= nullptr){
            temp1->next = temp->next;
            temp->next = temp->next->next;
            temp1 = temp1->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};