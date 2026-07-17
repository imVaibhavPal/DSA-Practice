#include<iostream>
using namespace std;
int main(){
    int arr[5] = {4,56,44,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int slargest = -1;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for (int i=0; i<n; i++){
        if(arr[i]>slargest && arr[i]!= largest){
            slargest=arr[i];
        }
    }
    cout<<"Second largest= "<<slargest<<endl;
    return 0;

}
