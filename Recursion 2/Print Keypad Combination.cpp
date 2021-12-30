/*Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :*/

#include <iostream>
using namespace std;
#include <string>
using namespace std;
#include <iostream>
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
int keypad(int num,string output[]){
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
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
}


int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
