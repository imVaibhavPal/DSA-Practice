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

        int ans = A[0];

        for (int i = 1; i <= K; i++) {
            ans += A[i % N];
        }

        cout << ans << endl;
    }

    return 0;
}