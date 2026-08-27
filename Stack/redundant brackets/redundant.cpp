#include <iostream>
#include <stack>
using namespace std;

bool checkRedundant(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {
            bool hasOperator = false;

            while (st.top() != '(') {
                char top = st.top();

                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }

                st.pop();
            }

            st.pop();

            if (!hasOperator) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    string s = "((a+b))";

    if (checkRedundant(s)) {
        cout << "Redundant brackets";
    }
    else {
        cout << "No redundant brackets";
    }

    return 0;
}