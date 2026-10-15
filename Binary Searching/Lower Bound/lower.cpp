#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {2, 5, 10, 13, 18};
    int target = 10;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] >= target){
            cout<< i;
            return 0;
        }
    }

    cout<<n;
    return 0;


}