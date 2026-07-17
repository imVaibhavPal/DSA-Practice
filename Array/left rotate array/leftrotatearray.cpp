#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    cout<<"Array: ";
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

/*for right rotate
 int temp = arr[n-1];
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;*/
