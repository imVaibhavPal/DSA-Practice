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

ListNode* deleteMiddle(ListNode* head) {

    // If only one node exists
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = NULL;

    // Find the middle node
    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete middle node
    prev->next = slow->next;    //it will remove the middle node from LL

    delete slow;

    return head;
}

void printList(ListNode* head) {

    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    // 1 → 2 → 3 → 4 → 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    head = deleteMiddle(head);

    cout << "After deleting middle: ";
    printList(head);

    return 0;
}