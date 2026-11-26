#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>& nums, int bound) {
    int ans = 0;
    int curr = 0;

    for (int x : nums) {
        if (x <= bound) {
            curr++;
            ans += curr;
        } 
        else {
            curr = 0;
        }
    }

    return ans;
}

int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
    return countSubarrays(nums, right) -
           countSubarrays(nums, left - 1);
}

int main() {
    vector<int> nums = {2, 1, 4, 3};

    int left = 2;
    int right = 3;

    cout << numSubarrayBoundedMax(nums, left, right);

    return 0;
}
