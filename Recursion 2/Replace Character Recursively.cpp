/*Given an input string S and two characters c1 and c2,
you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)*/

#include <iostream>
using namespace std;

#include<cstring>

void helper(char str[],char c1,char c2, int start){
    if(str[start]=='\0' || str[start+1]=='\0'){
        if(str[start]==c1){
            str[start]=c2;
        return ;}
        else
            return;
    }
    helper(str,c1,c2,start+1);

     if(str[start]==c1)
            str[start]=c2;

}




void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
		int len=strlen(input);
    	return helper(input,c1,c2,0);

}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
