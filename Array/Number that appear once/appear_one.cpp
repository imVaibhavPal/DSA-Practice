#include<iostream>
#include<vector>
using namespace std;

int SingleNumber(vector<int>&nums){
    int ans = 0;

    for(int num : nums){
        ans ^= num;         //Here number gets converted into binary and 
    }                        //then binary ans converted into integer and displayed on screen.

    return ans;
}

int main(){
    vector<int>nums ={4,1,2,1,2};

    cout<< SingleNumber(nums)<<endl;

    return 0;
}