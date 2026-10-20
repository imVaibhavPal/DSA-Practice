#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
        else if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1;
        }
        else {
            ceil = arr[mid];
            high = mid - 1;
        }
    }

    cout << "Floor = " << floor << endl;
    cout << "Ceil = " << ceil << endl;

    return 0;
}
