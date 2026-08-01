#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
    string s;
    string goal;

    cin>>s;
    cin>>goal;

    int m = s.length();
    int n = goal.length();

    if( m != n){
        cout<<"Not a valid string";
    }

    for(int i=1; i<=m; i++){
        rotate(begin(s), begin(s)+1, end(s));

        if( s == goal){
            cout<<"Reached to a goal"<<endl;
            return 0;
        }
    }

    cout<<"Not a rotation";

    return 0;

}