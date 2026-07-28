#include <iostream>
#include <string>
using namespace std;

int main() {

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (s.length() != t.length()) {
        cout << "Not Isomorphic";
        return 0;
    }

    int map_s[128] = {0};
    int map_t[128] = {0};

    int len = s.length();

    for (int i = 0; i < len; i++) {

        if (map_s[s[i]] != map_t[t[i]]) {
            cout << "Not Isomorphic";
            return 0;
        }

        map_s[s[i]] = i + 1;
        map_t[t[i]] = i + 1;
    }

    cout << "Isomorphic";

    return 0;
}