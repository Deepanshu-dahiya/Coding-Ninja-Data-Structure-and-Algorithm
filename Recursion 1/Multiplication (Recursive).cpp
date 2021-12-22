/*Given two integers M & N, calculate and return their multiplication using recursion.
 You can only use subtraction and addition for your calculation. No other operators are allowed.*/

#include <iostream>
#include "solution.h"
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
    if(n==0)
        return 0;


    int a= multiplyNumbers(m,n-1)+m;
    return a;

}
int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
