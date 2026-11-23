
#include <bits/stdc++.h>
using namespace std;

int nextGreaterElement(int n) {

    string s = to_string(n);

    int i = s.size() - 2;

    // Step 1: Find the first decreasing element from right
    while (i >= 0 && s[i] >= s[i + 1]) {
        i--;
    }

    // No greater permutation exists
    if (i < 0) {
        return -1;
    }

    // Step 2: Find the smallest digit greater than s[i]
    int j = s.size() - 1;

    while (s[j] <= s[i]) {
        j--;
    }

    // Step 3: Swap both digits
    swap(s[i], s[j]);

    // Step 4: Reverse the remaining suffix
    reverse(s.begin() + i + 1, s.end());

    // Step 5: Convert string to long long
    long long ans = stoll(s);

    // Check 32-bit integer overflow
    if (ans > INT_MAX) {
        return -1;
    }

    return (int)ans;
}

int main() {

    int n = 1243;

    cout << nextGreaterElement(n);

    return 0;
}
