#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int> *head){
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* next;

    if(head ==NULL || head->next == NULL){
        return head;
    }

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    if(head == NULL || head->next == NULL){
        return true;
    }

    //find the middle element;
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast=fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;

    while(slow!=NULL){
        if(head->data!=slow->data){
            return false;
        }
        head=head->next;
        slow=slow->next;
    }
    return true;
}
