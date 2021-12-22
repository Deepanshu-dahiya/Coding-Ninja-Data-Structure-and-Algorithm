/*Check whether a given String S is a palindrome using recursion. Return true or false.
*/
#include <iostream>
#include "solution.h"
using namespace std;
#include<cstring>

bool helper(char input[], int start,int end){
    if(start>=end)
        return true;
    if(input[start]==input[end])
        return helper(input,start+1, end-1);
    return false;
}

bool checkPalindrome(char input[]) {
    // Write your code here
    int a=strlen(input);
    bool aa=helper(input, 0,a-1);
    return aa;

}

int main() {
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
