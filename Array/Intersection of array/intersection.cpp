#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>a ={1,2,3,4,5};
    vector<int>b ={2,4,6,8,10};

    int n=a.size();
    int m=b.size();

    int i=0;
    int j=0;
    vector<int>ans;

    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }

        else if(a[i] > b[j]){
            j++;
        }

        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    cout<<"Intersection: ";
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

