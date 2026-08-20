#include<iostream>
using namespace std;

void getCounting(int n){

    if(n<=0)
    return;

    getCounting(n-1);
    cout<<n<<endl;
}

int main(){

    int n;
    cout<<"Please enter the input"<<endl;
    cin>>n;

    cout<<"Counting: "<<endl;
    getCounting(n);
}