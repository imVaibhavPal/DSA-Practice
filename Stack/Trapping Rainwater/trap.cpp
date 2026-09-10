#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int n = height.size();

    vector<int> leftMax(n);
    vector<int> rightMax(n);

    // Find maximum height from left
    leftMax[0] = height[0];

    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Find maximum height from right
    rightMax[n - 1] = height[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // Calculate trapped water
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += min(leftMax[i], rightMax[i]) - height[i];
    }

    cout << "Trapped Water: " << ans << endl;

    return 0;
}