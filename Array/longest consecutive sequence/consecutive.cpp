#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    unordered_set<int> st(nums.begin(), nums.end());

    int longest = 0;

    for (int num : st) {

        if (st.find(num - 1) == st.end()) {

            int current = num;
            int length = 1;

            while (st.find(current + 1) != st.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << "Longest Consecutive Sequence Length = " << longest << endl;

    return 0;
}