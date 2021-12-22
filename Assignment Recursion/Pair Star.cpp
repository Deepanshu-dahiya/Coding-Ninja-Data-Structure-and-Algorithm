/*Given a string S,
compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".*/

#include <iostream>
#include "solution.h"
using namespace std;
// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void helper(char str[],int start)
{
    if(str[start]=='\0' || str[start+1]=='\0'){
        	return;
    }
    helper(str,start+1);
  	int len=strlen(str);
    if(str[start]==str[start+1]){
    for(int i=len;i>=start;i--)
        str[i+1]=str[i];

   str[start]=str[start];
    str[start+1]='*';
    str[start+2]=str[start];
    }

}

void pairStar(char input[]) {
    // Write your code herehein
    helper(input,0);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
