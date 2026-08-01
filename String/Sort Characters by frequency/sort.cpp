#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;

    unordered_map<char,int>freq;  // it will store frequency 

    for(char ch : s){
        freq[ch]++;
    }

    sort(s.begin(),s.end(), [&](char a, char b){       //Lambda Function
        if(freq[a]=freq[b]){
            return a < b;
        }
        return freq[a] > freq[b];
    });

    cout<<"Output is "<<s<<endl;

    return 0;



}