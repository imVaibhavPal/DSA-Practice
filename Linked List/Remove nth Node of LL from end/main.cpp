// Remove Nth Node from End of LinkedList
#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Remove Nth node from the end
ListNode* removeNthFromEnd(ListNode* head, int n) {

    // Dummy node
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* slow = dummy;
    ListNode* fast = dummy;

    // Move fast n steps ahead
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // Move both pointers
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    // Node to delete
    ListNode* temp = slow->next;

    // Remove the node
    slow->next = slow->next->next;

    // Free memory
    delete temp;

    // Return new head
    ListNode* newHead = dummy->next;

    delete dummy;

    return newHead;
}

// Print linked list
void printList(ListNode* head) {
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    // Create linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    int n = 2;

    head = removeNthFromEnd(head, n);

    cout << "After removing " << n << "th node from end: ";
    printList(head);

    return 0;
}