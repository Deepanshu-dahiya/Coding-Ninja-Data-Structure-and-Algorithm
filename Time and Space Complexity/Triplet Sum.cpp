/*You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.
Note :
Given array/list can contain duplicate elements. */


#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int helper(int* arr,int s,int e,int num){
    int numpair = 0;
    while(s<e){
        if(arr[s] + arr[e] < num){
            s++;
        }
	else if(arr[s] + arr[e] > num){
        e--;
    }
        else{

            if(arr[s] == arr[e]){
            int length = e-s+1;
            numpair+=((length)*(length-1))/2;//pair nikalne ke liye
            return numpair;
        }

        int temps = s+1;
        int tempe = e-1;
        while(temps <= tempe && arr[temps] == arr[s]){
           temps++;
        }
            while(tempe >= temps && arr[tempe] == arr[e]){
                tempe--;
            }
            int totalelementfromstart = temps-s;
            int totalelementfromend = e - tempe;
            numpair+=(totalelementfromstart*totalelementfromend);
            s = temps;
            e = tempe;
        }

}
     return numpair;
}
int tripletSum(int *arr, int n, int num)
{
    sort(arr,arr+n);
    int trip = 0;
    for(int i=0;i<n;i++){
        int pairsumf = num - arr[i];
        int numpairs = helper(arr,(i+1),(n-1),pairsumf);//here we will find the pairs
        trip+=numpairs;
    }
    return trip;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;


		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
