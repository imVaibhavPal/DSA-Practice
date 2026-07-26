#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> words = {"flower", "flow", "flight"};

    string prefix = "";
    int totalStrings = words.size();

    // check the string is empty
    if (words.empty()) {
        cout << "Longest Common Prefix: " << "";
        return 0;
    }

    // Traverse each character of the first string
    for (int index = 0; index < words[0].length(); index++) {

        char currentChar = words[0][index];
        bool isCommon = true;

        
        for (int i = 1; i < totalStrings; i++) {

            
            if (words[i].length() <= index || words[i][index] != currentChar) {
                isCommon = false;
                break;
            }
        }

        if (!isCommon)
            break;

        prefix += currentChar;
    }

    cout << "Longest Common Prefix: " << prefix << endl;

    return 0;
}