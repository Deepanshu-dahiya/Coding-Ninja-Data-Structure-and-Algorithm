/* ************MERGE SOrt*************** */
#include <iostream>

using namespace std;
using namespace std;
void merge(int arr1[],int si,int mid,int ei){
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    // Create temp arrays
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr1[si + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr1[mid + 1 + j];


     // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = si;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr1[k] = L[i];
            i++;
        }
        else {
            arr1[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr1[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr1[k] = R[j];
        j++;
        k++;
    }
    cout<<"si  "<<si<<"  ei  "<<ei<<"  mid  "<<mid<<endl;
    for(int i=si;i<=ei;i++){
        cout<<arr1[i]<<"   ";
    }
    cout<<endl;
}




void merge_sort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
	int mid=(si+ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}
void mergeSort(int input[], int size){
	// Write your code here
    	int si=0;
    	int ei=size-1;
       merge_sort(input,si,ei);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
