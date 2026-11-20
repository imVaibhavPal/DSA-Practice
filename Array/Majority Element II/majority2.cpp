
#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums){

    int el1 = 0, el2 = 0;
    int cnt1 = 0, cnt2 = 0;

    // Step 1: Find two potential candidates
    for(int i = 0; i < nums.size(); i++){

        if(cnt1 == 0 && nums[i] != el2){
            el1 = nums[i];
            cnt1++;
        }
        else if(cnt2 == 0 && nums[i] != el1){
            el2 = nums[i];
            cnt2++;
        }
        else if(nums[i] == el1){
            cnt1++;
        }
        else if(nums[i] == el2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    // Step 2: Verify both candidates
    cnt1 = 0;
    cnt2 = 0;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] == el1){
            cnt1++;
        }
        else if(nums[i] == el2){
            cnt2++;
        }
    }

    // Step 3: Store majority elements
    vector<int> ans;

    if(cnt1 > nums.size() / 3){
        ans.push_back(el1);
    }

    if(cnt2 > nums.size() / 3){
        ans.push_back(el2);
    }

    return ans;
}

int main(){

    vector<int> nums = {3,4,4,2,3,4,4,3,6,4,5,4,4,2,3};

    vector<int> ans = majorityElement(nums);

    cout << "Majority Elements: ";

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}
