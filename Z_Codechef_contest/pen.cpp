#include<iostream>
using namespace std;

/*Blue and Black Pens
Chef is particular about the colour of the pens he uses to write in any exam.

He needs either:
3 blue pens, or
1 blue pen and 1 black pen.
One blue pen costs A, A rupees, and one black pen costs B, B rupees. Find the minimum cost Chef has to pay*/

int main(){
    int A, B;
    cin>>A >>B;

    cout<< min(3*A , A+B);
}