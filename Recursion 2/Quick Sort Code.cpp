/*  *****QUICK SORT ****  */
#include<iostream>

using namespace std;

/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call.
	This can be done by calling a helper function from given function.
	 The helper function can have three parameters: array, start index, end index.

	Skeleton code to achieve this:
*/

int partion(int arr[],int si, int ei){

   int pi=arr[si],count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<pi){
            count+=1;
        }
    }
    int temp=arr[si+count];
    arr[si+count]=pi;
    arr[si]=temp;
    int i=si,j=ei;
    while(i<si+count && si+count<j){
        if(arr[i]<pi){
            i++;
        }
        else if(pi<=arr[j]){
            j--;
        }
        else{
            int q=arr[i];
            arr[i]=arr[j];
            arr[j]=q;
            i++;
            j--;
        }
    }
    return (si+count);
}

void quickSort(int input[], int start, int end)
{

		// your code goes here
	if(start>=end)
        return;

    int pi=partion(input,start,end);
    quickSort(input,start,pi-1);
    quickSort(input,pi+1,end);


}
void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}


/*
void quickSort(int input[], int size) {
  Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */


int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;
}



