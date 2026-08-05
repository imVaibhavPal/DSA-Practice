#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxDepth(string s) {
    int depth = 0;
    int maxDepth = 0;

    for (char ch : s) {
        if (ch == '(') {
            depth++;
            maxDepth = max(maxDepth, depth);
        }
        else if (ch == ')') {
            depth--;
        }
    }

    return maxDepth;
}

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    cout << "Maximum Nesting Depth = " << maxDepth(s) << endl;

    return 0;
}