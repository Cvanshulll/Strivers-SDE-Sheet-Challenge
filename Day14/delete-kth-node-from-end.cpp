/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* fast = dummy;
    for(int i=1; i<=K; i++){
        fast=fast->next;
    }
    Node* slow = dummy;
    Node* prev = NULL;
    while(fast!=NULL){
        prev=slow;
        slow=slow->next;
        fast = fast->next;
    }
    prev->next = slow->next;
    delete(slow);
    return dummy->next;
}
