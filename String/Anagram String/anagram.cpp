#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (s.length() != t.length()) {
        cout << "Not Anagram";
        return 0;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}