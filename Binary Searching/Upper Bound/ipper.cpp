#include<iostream>
#include<algorithm>
#include<vector>

// Search insert Position

using namespace std;

int main(){
    vector<int> arr = {2, 5, 10, 13, 18};
    int target = 2;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] >= target){
            cout<<"upper Bound "<< i;
            return 0;
        }
    }

    cout<<n;
    return 0;


}