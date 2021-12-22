/*Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
using recursion.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
#include "solution.h"
using namespace std;

#include<cmath>
double geometricSum(int k) {
    // Write your code here

    if(k==0)
        return 1;
    double a=geometricSum(k-1);
    //cout<<a<<" ";
    return (a+(1/(pow(2,k))));
}


int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
