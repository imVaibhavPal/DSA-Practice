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

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    insertAtBottom(st, 5);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}