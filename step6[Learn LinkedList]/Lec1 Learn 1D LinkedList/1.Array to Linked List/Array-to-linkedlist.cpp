class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head = NULL;
        Node* tail = NULL;
        int n = arr.size();
        for(int i=0;i<n;i++){
            Node* newNode = new Node(arr[i]);
            if(head==NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};