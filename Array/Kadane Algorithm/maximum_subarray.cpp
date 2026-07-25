#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int>nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        int sum = 0;
        int maxi = nums[0];
        int n = nums.size();

        int start = 0, end = 0;
        int tempStart = 0;

        for(int i = 0; i < n; i++) {

            // If starting a new subarray
            if(sum == 0) {
                tempStart = i;
            }

            sum = sum + nums[i];

            if(sum > maxi) {
                maxi = sum;
                start = tempStart;
                end = i;
            }

            if(sum < 0) {
                sum = 0;
            }
        }

        // Print Maximum Sum
        cout << "Maximum Sum = " << maxi << endl;

        // Print Subarray
        cout << "Subarray: ";
        for(int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }

        return maxi;
}