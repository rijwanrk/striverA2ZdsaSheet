class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int length = 0;
        Node* temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
};
