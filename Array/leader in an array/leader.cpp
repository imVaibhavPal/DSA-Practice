#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>arr = {16,17, 4,3,5,2};
    vector<int>ans;
    int n= arr.size();
    int maxi = arr[n-1];  // we use n-1 so that maxi element is from roghmost of the array taken

    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
        }

        //keep tracker of right max
        maxi = max(maxi, arr[i]);
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans){
        cout<<x<<" ";
    }

    return 0;

}