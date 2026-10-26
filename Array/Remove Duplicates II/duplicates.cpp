#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (k < 2 || nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 1, 2, 2, 3};

    int k = obj.removeDuplicates(nums);

    cout << "Number of elements: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}