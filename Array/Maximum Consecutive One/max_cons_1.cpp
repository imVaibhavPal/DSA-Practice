// Maximum Consecutive One

#include<iostream>
using namespace std;

int main(){

    int arr[5]= {1,1,1,6,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    int cnt = 0;
    int maxi = 0;

    for(int i=0; i<n; i++){
        if(arr[i]== 1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        maxi = max(maxi, cnt);
        

    }
    cout<<"Maximum Consecutive One: "<<maxi<<endl;
    return 0;
}