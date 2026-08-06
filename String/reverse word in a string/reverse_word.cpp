#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);
    // getline()-->> It reads the entire line from the keyboard, including spaces, until the user presses Enter.

    vector<string> words;
    string word;

    stringstream ss(s);

    // Extract words (ignores extra spaces)
    while (ss >> word) {
        words.push_back(word);
    }

    // Print in reverse order
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i != 0)
            cout << " ";
    }

    cout << endl;

    return 0;
}