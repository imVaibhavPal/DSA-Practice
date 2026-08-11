#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //fast = NULL toh fir even case
    //fast->next = NULL toh fir odd case

    return slow;
}

int main(){
    Node* head = new Node(1);
    head-> next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    Node * middle= findMiddle(head);

    cout<<"Middle element: "<<middle->data<<endl;

    return 0;

}