/*Given the code to find out and return the number of digits present in a number recursively.
But it contains few bugs, that you need to rectify such that all the test cases should pas*/

#include<iostream>
#include "Solution.h"
using namespace std;
int count(int n){

    if(n/10 == 0){
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns+1 ;
}


int main(){
    int n;
    cin >> n;

    cout << count(n) << endl;
}


