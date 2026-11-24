#include<iostream>
#include<vector>
#include<iostream>

using namespace std;

int maxChunksToSorted(vector<int>& arr){

    int maxElement = 0;
    int chunks = 0;

    for(int i=0; i<arr.size(); i++){
        maxElement = max(maxElement, arr[i]);

        if(maxElement == i){
            chunks++;
        }
    }
    return chunks;
}

int main(){
    vector<int> arr = {1,0,2,3,4};
    int ans = maxChunksToSorted(arr);

    cout<< "Maximum Chunks "<< ans <<endl;

    return 0;


}