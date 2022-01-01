/*You have been given a random integer array/list(ARR) of size N.
Write a function that rotates the given array/list by D elements(towards the left).
 Note:
Change in the input array/list itself. You don't need to return or print the elements.*/


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate(int *arr1, int d, int n)
{
    //Write your code here
    int arr[d],j=0;
    for(int i=0;i<d;i++){
        arr[i]=arr1[i];
    }
    for(int i=0;i<n-d;i++){

            j+=1;
            arr1[i]=arr1[i+d];
    }
    int i=0;
	while(d>0){
        arr1[j++]=arr[i++];
    	d--;
    }
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
