#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int srow = 0, scol = 0;
    int erow = m - 1, ecol = n - 1;

    vector<int> ans;

    while (srow <= erow && scol <= ecol) {

        // Top Row
        for (int j = scol; j <= ecol; j++) {
            ans.push_back(mat[srow][j]);
        }

        // Right Column
        for (int i = srow + 1; i <= erow; i++) {
            ans.push_back(mat[i][ecol]);
        }

        // Bottom Row
        if (srow != erow) {
            for (int j = ecol - 1; j >= scol; j--) {
                ans.push_back(mat[erow][j]);
            }
        }

        // Left Column
        if (scol != ecol) {
            for (int i = erow - 1; i >= srow + 1; i--) {
                ans.push_back(mat[i][scol]);
            }
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    cout << "Spiral Order: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}