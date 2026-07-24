#include <iostream>
#include <string>
using namespace std;

string removeOuterParentheses(string s) {
    string ans = "";
    int count = 0;

    for (char ch : s) {
        if (ch == '(') {
            if (count > 0)
                ans += ch;
            count++;
        } else { // ch == ')'
            count--;
            if (count > 0)
                ans += ch;
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    cout << "After removing outermost parentheses: "
         << removeOuterParentheses(s) << endl;

    return 0;
}