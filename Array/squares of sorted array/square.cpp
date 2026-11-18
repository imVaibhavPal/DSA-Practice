#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int> arr = {-4,-1,0,3,10};
    int n = arr.size();

    vector<int> ans(n);

    int left = 0;
    int right = n-1;

    for(int i=n-1; i>=0; i--){
        if(abs(arr[left]) > abs(arr[right])){
            ans[i] = arr[left] * arr[left];
            left++;
        }
        else{
            ans[i] = arr[right] * arr[right];
            right--;
        }
    }
    
    //for printing the array
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
    
}