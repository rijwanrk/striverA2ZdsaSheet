class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node* newNode = new Node(data);
        if(head==NULL){
            return newNode;
        }
        Node* temp = head;
        int cnt = 0;
        while(temp->next!=NULL){
            if(cnt==pos){
                break;
            }
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next = NULL;
            return head;
        }
        Node*front = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = front;
        front->prev = newNode;
        return head;
    }
};