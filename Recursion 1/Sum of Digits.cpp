/*Write a recursive function that returns the sum of the digits of a given integer.*/
#include <iostream>
#include "solution.h"
using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    if(n==0)
        return 0;

    return sumOfDigits(n/10)+n%10;

}
int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
