#include<iostream>
using namespace std;

int exp(int n){
    if (n==0)
        return 1;

    int chota_answer = exp(n/2);
    if(n&1){
        //odd
        return 2*chota_answer*chota_answer;
    }
    else{
        //even
        return chota_answer*chota_answer;
    }    
}

int expTwo(int n){
    if(n==0)
        return 1;

    int ans = 2*expTwo(n-1);
    cout<<" for n "<<n<<" ans "<<ans<<endl;
    return ans;

}

int main(){

    int n;
    cin>>n;

    int ans=expTwo(n);
    cout<<"The answer is "<<ans<<endl;
}