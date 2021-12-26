/*Given an input string S and two characters c1 and c2,
you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)*/

#include <iostream>
using namespace std;

#include<cstring>

void helper(char str[], int start){
    if(str[start]=='\0' || str[start+1]=='\0'){

            return;
    }
    helper(str,start+1);

     if(str[start]==str[start+1]){
         for(int i=start;str[i]!='\0';i++){
             str[i]=str[i+1];

         }
     }
}




void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
    helper(input,0);


}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
