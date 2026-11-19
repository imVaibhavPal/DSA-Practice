#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int maxProduct(vector<int>& nums){
    int n = nums.size();
    int leftProduct = 1;
    int rightProduct = 1;
    int ans = nums[0];

    for (int i = 0; i < n; i++) {
        leftProduct = leftProduct == 0 ? 1 : leftProduct;
        rightProduct = rightProduct == 0 ? 1 : rightProduct;

        leftProduct *= nums[i];
        rightProduct *= nums[n - i - 1];

        ans = max(ans, max(leftProduct, rightProduct));
    }

    return ans;
}

int main(){
    vector<int> nums = {2,9,-2, 4};

    cout<< "Maximum Product: " << maxProduct(nums);

    return 0;
}