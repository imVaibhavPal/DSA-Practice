#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,1,2,3,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;

    for(int j =1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        } 
    }
    cout << "Number of unique elements = " << i + 1 << endl;

    cout << "Array: ";
    for(int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }
}
