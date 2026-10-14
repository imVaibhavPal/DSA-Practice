#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int A[100];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A, A + N, greater<int>());

        int ans = 0;
        int count = min(K + 1, N);

        for (int i = 0; i < count; i++) {
            ans += A[i];
        }

        cout << ans << endl;
    }

    return 0;
}