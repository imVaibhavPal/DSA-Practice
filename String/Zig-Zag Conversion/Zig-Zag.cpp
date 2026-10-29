#include <iostream>
#include <vector>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1 || numRows >= s.length()) {
        return s;
    }

    vector<string> rows(numRows);
    int currRow = 0;
    int direction = -1;

    for (char c : s) {
        rows[currRow] += c;

        if (currRow == 0 || currRow == numRows - 1) {
            direction *= -1;
        }

        currRow += direction;
    }

    string result;

    for (string row : rows) {
        result += row;
    }

    return result;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << convert(s, numRows) << endl;

    return 0;
}