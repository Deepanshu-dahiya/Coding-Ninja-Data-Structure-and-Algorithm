/*Write a recursive function to convert a given string into the number it represents.
That is input will be a numeric string that contains only numbers, you need to convert the string into
corresponding integer and return the answer.*/


#include <iostream>
#include "solution.h"
using namespace std;
#include<cstring>
#include<cmath>
using namespace std;
int helper(char input[],int start,int size)
{
    if(input[start+1]=='\0')
        return input[start]-'0';

    int ans=helper(input,start+1,size-1);
    int aa=input[start]-'0';


    int aaa =pow(10,size-1);
    //cout<<aa<<" aa    aaa ="<<aaa<<"    ANS "<<endl;
    int w=(aa*aaa)+ans;
    //cout<<w<<endl;

return w;

}



int stringToNumber(char input[]) {
    int a=strlen(input);
   // cout<<a<<endl;
    // Write your code here
    int aa =helper(input,0,a);
	return aa;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
