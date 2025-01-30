class Solution {
  public:
    // Function to delete a node at given position.
    Node*deleteHead(Node* head){
        Node*back = head;
        head=head->next;
        head->prev = NULL;
        back->next = NULL;
        delete(back);
        return head;
    }
    Node*deletetail(Node*head,Node*tail){
        Node*back = tail->prev;
        back->next = NULL;
        tail->prev = NULL;
        delete(tail);
        return head;
    }
    Node* deleteNode(Node* head, int x) {
        // Your code here
        int cnt = 1;
        if(head==NULL){
            return head;
        }
        if(x==1){
            return deleteHead(head);
        }
        Node* temp = head;
        while(temp->next!=NULL){
            if(cnt==x){
               break; 
            }
            temp=temp->next;
            cnt++;
        }
        if(head->next==NULL){
            return deletetail(head,temp);
        }
        Node*back = temp->prev;
        Node*front = temp->next;
        back->next = front;
        front->prev = back;
        temp->next = NULL;
        temp->prev = NULL;
        delete(temp);
        return head;
    }
};