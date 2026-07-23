#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>& nums, int target){
    int n = nums.size();

    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            if(nums[i] + nums[j] == target){
                return{i,j};
            }
        }
    }

    return {};
}

int main(){
    vector<int>nums = {1,8,21,15};
    int target = 22;

    vector<int>ans = twoSum(nums, target);

    cout<<ans[0]<< " "<<ans[1];
}