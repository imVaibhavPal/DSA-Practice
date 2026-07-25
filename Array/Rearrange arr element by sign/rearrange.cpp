#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {3,-1,-9,-2,5,4};
    int posIndex = 0;
    int negIndex = 1;
    int n=nums.size();

    vector<int>ans (n);

    for(int i=0; i<n; i++){
        if(nums[i] > 0 ){
            ans[posIndex] = nums[i];
            posIndex += 2;
        }else{
            ans[negIndex] = nums[i];
            negIndex += 2;        
        }
    }

    for(int i=0; i<n;i++){
        cout<<" "<<ans[i]<<"";
    }
    return 0;
}