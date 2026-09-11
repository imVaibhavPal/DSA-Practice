#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// Next Smaller Element
vector<int> nextSmallerElement(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans(n);
    stack<int> s;
    s.push(-1);

    for (int i = n - 1; i >= 0; i--) {

        while (s.top() != -1 && arr[s.top()] >= arr[i]) {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}

// Previous Smaller Element
vector<int> prevSmallerElement(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans(n);
    stack<int> s;
    s.push(-1);

    for (int i = 0; i < n; i++) {

        while (s.top() != -1 && arr[s.top()] >= arr[i]) {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}

// Largest Rectangle in Histogram
int largestRectangleArea(vector<int>& heights) {

    int n = heights.size();

    vector<int> next = nextSmallerElement(heights);
    vector<int> prev = prevSmallerElement(heights);

    int area = 0;

    for (int i = 0; i < n; i++) {

        if (next[i] == -1) {
            next[i] = n;
        }

        int width = next[i] - prev[i] - 1;

        int currentArea = heights[i] * width;

        area = max(area, currentArea);
    }

    return area;
}

// Maximal Rectangle
int maximalRectangle(vector<vector<char>>& matrix) {

    if (matrix.empty()) {
        return 0;
    }

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> heights(m, 0);

    int maxArea = 0;

    for (int i = 0; i < n; i++) {

        // Create histogram
        for (int j = 0; j < m; j++) {

            if (matrix[i][j] == '1') {
                heights[j]++;
            }
            else {
                heights[j] = 0;
            }
        }

        // Find largest rectangle
        int currentArea = largestRectangleArea(heights);

        maxArea = max(maxArea, currentArea);
    }

    return maxArea;
}

int main() {

    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };

    cout << "Maximum Rectangle Area: "
         << maximalRectangle(matrix) << endl;

    return 0;
}