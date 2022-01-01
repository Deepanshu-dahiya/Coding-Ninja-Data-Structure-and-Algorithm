/*You have been given an integer array/list(ARR) and a number 'num'.
Find and return the total number of pairs in the array/list which sum to 'num'.
Note:
Given array/list can contain duplicate elements. */


#include <iostream>
using namespace std;

#include<bits/stdc++.h>
int pairSum(int arr[], int n, int sum)
{
    unordered_map<int, int> m;

    // Store counts of all elements in map m
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    int twice_count = 0;

    // iterate through each element and increment the
    // count (Notice that every pair is counted twice)
    for (int i = 0; i < n; i++) {
        twice_count += m[sum - arr[i]];

        // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (sum - arr[i] == arr[i])
            twice_count--;
    }

    // return the half of twice_count
    return twice_count / 2;
}

int main()
{
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

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
