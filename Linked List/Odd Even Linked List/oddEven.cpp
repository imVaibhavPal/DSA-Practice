#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int data){
        val = data;
        next = NULL;
    }
};

ListNode* oddEvenList(ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = head->next;

    while(even != NULL && even->next != NULL){
        odd->next = odd->next->next;
        odd = odd->next;

        even->next = even->next->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
}

void print(ListNode* head){
    while(head != NULL){
        cout<<head->val <<" ";
        head=head->next;
    }
}

int main(){
    ListNode * head=new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    head = oddEvenList(head);

    print(head);

    return 0;
}

