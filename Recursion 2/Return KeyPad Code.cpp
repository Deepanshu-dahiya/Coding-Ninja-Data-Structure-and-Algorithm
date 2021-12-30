/*Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you.
You just have to populate the output array and return the count of elements populated in the output array.*/

#include <iostream>
using namespace std;
#include <string>
using namespace std;
#include <string>
using namespace std;

string Getchar(int n){
    if(n==2)
        return "abc";
    if(n==3)
        return "def";
    if(n==4)
        return "ghi";
    if(n==5)
        return "jkl";
    if(n==6)
        return "mno";
    if(n==7)
        return "pqrs";
    if(n==8)
        return "tuv";
    if(n==9)
        return "wxyz";
    return " ";
}
/*
int getKeypad(int num, string output[]){
     if(num==0){
        output[0]="";
        return 1;
    }
    int smallOutSize=keypad(num/10,output);

    string pd=Getchar(num%10);
    int newsize=pd.size()*smallOutSize;
    //Copy
    string temp[10000];
    for(int i=0;i<10000;i++)
        temp[i]=output[i];

    for(int i=0;i<pd.size();i++){

        for (int j=0;j<smallOutSize;j++){
            output[j+i*smallOutSize]=temp[j]+pd[i];
        }
    }
    return newsize;
    if(num==0){
    	   output[0]=" ";
        return 1;
    }
    int kk =num%10;
    int smallsize=getKeypad(num/10,output);
	string firstDigit=Getchar(kk);

     string temp[10000];
    int k=0;
    for(int i=0;i<smallsize;i++){
        for(int j=0;j<firstDigit.size();j++)
        {
            temp[k]=output[i]+firstDigit[j];
            k++;
        }
    }

        for(int i=0;i<k;i++){
        //for(int j=0;j<firstDigit.length();j++);

            output[i]=temp[i];
        }
    return smallsize*firstDigit.length();
     */


int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
//    getKeypad(num,output);
	    if(num==0){
        output[0]="";
        return 1;
    }
    int smallOutSize=keypad(num/10,output);

    string pd=Getchar(num%10);
    int newsize=pd.size()*smallOutSize;
    //Copy
    string temp[10000];
    for(int i=0;i<10000;i++)
        temp[i]=output[i];

    for(int i=0;i<pd.size();i++){

        for (int j=0;j<smallOutSize;j++){
            output[j+i*smallOutSize]=temp[j]+pd[i];
        }
    }
    return newsize;
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
