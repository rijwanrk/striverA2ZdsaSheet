class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        // Node*back = NULL;
        Node*temp = NULL;
        Node*head = NULL;
        for(int i=0;i<arr.size();i++){
            Node* newNode = new Node(arr[i]);
            if(head==NULL){
                head = newNode;
                temp = newNode;
            }else{
                // back = temp;
                temp->next = newNode;
                newNode->prev = temp;
                temp = newNode;
            }
        }
        return head;
    }
};