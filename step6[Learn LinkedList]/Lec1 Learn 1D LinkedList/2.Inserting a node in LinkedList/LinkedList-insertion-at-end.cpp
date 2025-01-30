class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
        Node*temp = head;
        Node*newNode = new Node(x);
        if(head==NULL){
            return newNode;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
        return head;
    }
};