#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(vector<int>& arr) {
    int n = arr.size();
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];

        while (s.top() != -1 && s.top() >= curr) {
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 4, 3};
    vector<int> ans = nextSmallerElement(arr);

    for (int x : ans)
        cout << x << " ";

    return 0;
}