#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Merge two sorted linked lists
Node* merge(Node* left, Node* right) {

    Node dummy(0);
    Node* temp = &dummy;

    while (left != NULL && right != NULL) {

        if (left->data <= right->data) {
            temp->next = left;
            left = left->next;
        }
        else {
            temp->next = right;
            right = right->next;
        }

        temp = temp->next;
    }

    if (left != NULL)
        temp->next = left;
    else
        temp->next = right;

    return dummy.next;
}

// Merge Sort
Node* sortList(Node* head) {

    // Base case
    if (head == NULL || head->next == NULL)
        return head;

    // Find middle
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split the list
    Node* right = slow->next;
    slow->next = NULL;

    // Sort both halves
    Node* left = sortList(head);
    right = sortList(right);

    // Merge both sorted halves
    return merge(left, right);
}

// Print linked list
void print(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    cout << "Before sorting: ";
    print(head);

    head = sortList(head);

    cout << "After sorting: ";
    print(head);

    return 0;
}