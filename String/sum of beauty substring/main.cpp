#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int beautySum(string s) {
    int n = s.size();
    int ans = 0;

    // Choose the starting index
    for (int i = 0; i < n; i++) {

        // Frequency array for 26 lowercase letters
        vector<int> freq(26, 0);

        // Extend the substring
        for (int j = i; j < n; j++) {

            // Update frequency of current character
            freq[s[j] - 'a']++;

            int mx = 0;
            int mn = INT_MAX;

            // Find maximum and minimum frequency
            for (int k = 0; k < 26; k++) {

                if (freq[k] > 0) {
                    mx = max(mx, freq[k]);
                    mn = min(mn, freq[k]);
                }
            }

            // Add beauty of current substring
            ans += (mx - mn);
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Sum of Beauty of All Substrings = " << beautySum(s) << endl;

    return 0;
}