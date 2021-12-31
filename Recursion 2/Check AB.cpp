/*Suppose you have a string, S, made up of only 'a's and 'b's.
Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.*/

#include <iostream>
using namespace std;
#include <string>
bool helper(char str[],int start){
		if	 (str[start]=='\0')
        return true;
    if(str[start]!='a')
        return false;
    if(str[start+1]=='b' && str[start+2]=='b')
        return  helper(str,start+3);
    return  helper( str,  start+1);


}

bool checkAB(char input[]) {
	// Write your code here
	return helper(input,0);
}



int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
