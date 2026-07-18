// Union of two sorted array

#include<iostream>
#include<vector>
#include <set>
using namespace std;
int main(){

    vector<int>a={1,2,3,4,5};
    vector<int>b={2,4,6,8,10};

    int n1=a.size();
    int n2=b.size();

    set<int>st;

    for(int i=0; i<n1;i++){
        st.insert(a[i]);
    }

    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }

    vector<int>temp;
    for(auto it :st){
        temp.push_back(it);
    }
    
    for(int x: temp){
        cout<<x<<" ";
    }
    return 0;

}