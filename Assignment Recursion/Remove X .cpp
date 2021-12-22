/*Given a string, compute recursively a new string where all 'x' chars have been removed.*/

#include <iostream>
#include "solution.h"
using namespace std;

// Change in the given string itself. So no need to return or print anything

void helper(char str[],int start)
{
    if(str[start]=='\0' || str[start+1]=='\0'){
        if(str[start]=='x')
            str[start]=str[start+1];
        else
        	return;

    }
    helper(str,start+1);
    if(str[start]=='x'){
    for(int i=start;str[i]!='\0';i++)
        str[i]=str[i+1];
    }


}

void removeX(char input[]) {
    // Write your code herehein
    helper(input,0);


}


int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
