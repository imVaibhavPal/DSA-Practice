#include <iostream>
using namespace std;

int num(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    return 1000;   // M
}

int romanToInt(string s) {
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && num(s[i]) < num(s[i + 1])) {
            sum -= num(s[i]);
        }
        else {
            sum += num(s[i]);
        }
    }

    return sum;
}

int main() {
    string s;

    cout << "Enter Roman Numeral: ";
    cin >> s;

    cout << "Integer Value = " << romanToInt(s) << endl;

    return 0;
}