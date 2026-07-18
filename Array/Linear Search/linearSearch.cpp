#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,4,94,16,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int linearSearch = 4;

    for(int i=0;i<n;i++){
        if(arr[i]== linearSearch){
            cout<<"Number found at index "<<i<<" Number is ";
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"Number not found"<<endl;
    return 0;
}