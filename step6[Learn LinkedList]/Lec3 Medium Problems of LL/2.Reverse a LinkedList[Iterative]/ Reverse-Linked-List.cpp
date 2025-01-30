class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* front = head;
        ListNode* prev = NULL;
        while(temp!=NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp= front;
        }
        return prev;
    }
};