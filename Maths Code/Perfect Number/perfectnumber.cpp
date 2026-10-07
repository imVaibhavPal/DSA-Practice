#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the number ";
    cin>>n;

    int sum = 1;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            sum += i;
        }
    }

    if(sum == n){
        cout<<"Perfect Number "<<endl;
    }
    else{
        cout<<"Not a Perfect Number"<<endl;
    }

    return 0;
}