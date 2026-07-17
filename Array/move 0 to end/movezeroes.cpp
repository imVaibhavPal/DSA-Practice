#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[7] = {3,0,5,0,12,0,91};
    vector<int> temp;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nz=temp.size();
    for(int i=0; i<nz; i++){
        arr[i]=temp[i];
    }

    for(int i=nz;i<n;i++){
        arr[i]=0;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
