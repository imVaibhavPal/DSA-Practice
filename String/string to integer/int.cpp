
#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

int myAtoi(string s) {
    int i = 0;
    int n = s.size();
    long long num = 0;
    int sign = 1;

    // Skip leading spaces
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Check positive or negative sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // Convert digits into integer
    while (i < n && isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');

        // Handle overflow
        if (sign * num >= INT_MAX) {
            return INT_MAX;
        }

        if (sign * num <= INT_MIN) {
            return INT_MIN;
        }

        i++;
    }

    return sign * num;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int result = myAtoi(s);

    cout << "Integer value: " << result << endl;

    return 0;
}
