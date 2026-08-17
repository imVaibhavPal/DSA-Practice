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

// Print linked list
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Intersection
Node* getIntersection(Node* headA, Node* headB) {

    Node* p1 = headA;
    Node* p2 = headB;

    while (p1 != p2) {

        if (p1 == NULL)
            p1 = headB;
        else
            p1 = p1->next;

        if (p2 == NULL)
            p2 = headA;
        else
            p2 = p2->next;
    }

    return p1;
}

int main() {

    // Common part
    Node* common = new Node(7);
    common->next = new Node(8);
    common->next->next = new Node(9);

    // List A
    Node* headA = new Node(1);
    headA->next = new Node(2);
    headA->next->next = new Node(3);

    // Connect A to common part
    headA->next->next->next = common;

    // List B
    Node* headB = new Node(4);
    headB->next = new Node(5);

    // Connect B to common part
    headB->next->next = common;

    cout << "List A: ";
    print(headA);

    cout << "List B: ";
    print(headB);

    Node* intersection = getIntersection(headA, headB);

    if (intersection != NULL)
        cout << "Intersection: " << intersection->data << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}