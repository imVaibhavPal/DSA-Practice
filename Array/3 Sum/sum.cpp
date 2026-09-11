#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;
    int n = nums.size();

    // Sort the array
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate i
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        for (; j < k; ) {

            int sum = nums[i] + nums[j] + nums[k];

            if (sum == 0) {

                ans.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                // Skip duplicates
                while (j < k && nums[j] == nums[j - 1]) {
                    j++;
                }

                while (j < k && nums[k] == nums[k + 1]) {
                    k--;
                }
            }
            else if (sum < 0) {
                j++;
            }
            else {
                k--;
            }
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    for (auto triplet : result) {
        cout << "[ ";
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}