// Reverse the stack using recursion

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int element) {
    if(st.empty()) {
        st.push(element);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, element);

    st.push(top);
}

void reverseStack(stack<int>& st) {
    if(st.empty()) {
        return;
    }

    int top = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, top);
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    reverseStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}