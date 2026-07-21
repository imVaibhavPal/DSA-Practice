//Using Sum Formula>>(n(n+1)/2) ONLY FOR 1 NUMBER IS MISSING
//ONLY APPLICABLE FOR NATURAL NUMBERS IN SEQUENCE

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {1,2,3,5,6};
    int n=6;

    int expected_Sum = ((n*(n+1))/2);
    int actual_Sum = 0;

    for(int i=0; i<n-1; i++){
        actual_Sum += arr[i];
    }
    cout<<"Actual Sum: "<<actual_Sum<<endl;

    cout<<"The Missing Number is: "<<expected_Sum - actual_Sum<<endl;

    return 0;

}

