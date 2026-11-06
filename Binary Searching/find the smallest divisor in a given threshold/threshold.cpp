#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());

    while (low < high) {
        int mid = low + (high - low) / 2;

        int sum = 0;

        for (int num : nums) {
            sum += (num + mid - 1) / mid;
        }

        if (sum <= threshold) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << smallestDivisor(nums, threshold);

    return 0;
}