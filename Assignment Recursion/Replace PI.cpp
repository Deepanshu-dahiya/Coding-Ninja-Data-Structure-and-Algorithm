/*Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".*/

#include <iostream>
#include "solution.h"
using namespace std;

// Change in the given string itself. So no need to return or print anything
#include <bits/stdc++.h>
using namespace std;
void helper(char str[], int start)
{
     if (str[start] == '\0' || str[start + 1] == '\0') {
        return;}
    //cout<<str<<"  "<<start<<"  h"<<endl;

    helper(str, start + 1);

    if (str[start] == 'p' && str[start + 1] == 'i') {
  for (int i = strlen(str); i >= start + 2; i--) {
            str[i + 2] = str[i];
        }

        // Replacing with "3.14"
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}


void replacePi(char input[]) {
	// Write your code here
	helper(input,0);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
