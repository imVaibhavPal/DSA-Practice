#include <iostream>
#include <vector>
using namespace std;

int celebrity(vector<vector<int>>& mat, int n) {
    int candidate = 0;

    // Find possible celebrity
    for (int i = 1; i < n; i++) {
        if (mat[candidate][i] == 1) {
            candidate = i;
        }
    }

    // Verify candidate
    for (int i = 0; i < n; i++) {
        if (i != candidate) {
            if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                return -1;
            }
        }
    }

    return candidate;
}

int main() {
    vector<vector<int>> mat = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

    int n = mat.size();

    int ans = celebrity(mat, n);

    if (ans == -1)
        cout << "No Celebrity";
    else
        cout << "Celebrity is person " << ans;

    return 0;
}