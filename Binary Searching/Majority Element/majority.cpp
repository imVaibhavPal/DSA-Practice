#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& num){

    int majority = num[0];
    int votes = 1;

    for(int i=1; i<num.size(); i++){

        if(votes == 0){
            votes++;
            majority = num[i];
        }
        else if(majority == num[i]){
            votes++;
        }else{
            votes--;
        }
    }

    //check if their was not majority element
    int cnt = 0;
    for(int i=0; i<num.size(); i++){
        if(num[i] = majority){
            cnt++;
        }
    }
    // taking n\2 condition
    if(cnt > num.size()/2){
        return majority;
    }

    return -1;


}

int main(){
    vector<int> num = {2,2,1,3,1,2,2};
    cout<<"Majority Element: "<<majorityElement(num)<<endl;
    return 0;
}