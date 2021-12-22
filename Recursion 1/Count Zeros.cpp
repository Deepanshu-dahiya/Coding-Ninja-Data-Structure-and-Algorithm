/*Given an integer N, count and return the number of zeros that are present in the given integer using recursion.*/
#include <iostream>
#include "solution.h"
using namespace std;

int countZeros(int n) {
    // Write your code here
	if(n<10){
        if(n%10==0){
            return 1;
        }
        else
            return 0;
    }
    if(n%10==0)
        return countZeros(n/10)+1;
    else
        return countZeros(n/10);

}
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
