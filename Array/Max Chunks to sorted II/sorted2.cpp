#include <bits/stdc++.h>
using namespace std;

int maxChunksToSorted(vector<int>& arr) {

    int n = arr.size();

    vector<int> suffixMin(n);

    suffixMin[n-1] = arr[n-1];

    for(int i = n-2; i >= 0; i--) {
        suffixMin[i] = min(arr[i], suffixMin[i+1]);
    }

    int prefixMax = INT_MIN;
    int chunks = 0;

    for(int i = 0; i < n; i++) {

        prefixMax = max(prefixMax, arr[i]);

        if(i == n-1 || prefixMax <= suffixMin[i+1]) {
            chunks++;
        }
    }

    return chunks;
}

int main() {

    vector<int> arr = {2, 1, 3, 4, 4};

    cout << maxChunksToSorted(arr);

    return 0;
}
