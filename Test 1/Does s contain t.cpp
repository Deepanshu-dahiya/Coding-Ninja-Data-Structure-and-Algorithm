/*Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.

Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true*/

#include<iostream>
using namespace std;

bool helper(char large[],int start1,char small[],int start2){

    if(small[start2]=='\0')
    {
        return true;}

    if(large[start1]=='\0'){
        return false;}

    if(large[start1] == small[start2])
        return helper( large,start1+1,small,start2+1);
    else
        return helper(large,start1+1,small,start2);


}
bool checksequenece(char large[] , char small[]) {
    return helper(large,0,small,0);

}

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}

