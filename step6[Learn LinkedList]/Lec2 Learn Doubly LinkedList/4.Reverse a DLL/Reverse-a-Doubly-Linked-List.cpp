class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        DLLNode* current = head;
        DLLNode* last = NULL;
        while(current!=NULL){
            last = current->prev;
            current->prev = current->next;
            current->next = last;
            current = current->prev;
        }
        DLLNode* newHead = last->prev;
        return newHead;
    }
};
