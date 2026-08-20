#include<iostream>
using namespace std;

int getFib(int n){

    if(n==0 || n==1)
        return n;

    return getFib(n-1) + getFib(n-2);

}

int main(){

    int n;
    cin>> n;

    cout<<"fibonacci series of "<< n<<" is "<<getFib(n)<<endl;

    return 0;
}