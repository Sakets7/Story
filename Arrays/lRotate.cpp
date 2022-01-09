#include <iostream>
using namespace std;

// Naive Method :- Time Complexity: theta(nd), Space Complexity: theta(1)

void lRotateOne (int arr[], int n) {
  int temp = arr[0];
  for (int i = 1; i < n; i++) 
    arr[i-1] = arr[i];
  arr[n-1] = temp;
}
void lRotate(int arr[], int n, int d) {
  for (int i = 0; i < d; i++)
    lRotateOne(arr, n);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int d;
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  lRotate(arr, n, d=2);
  for (int i = 0; i < n; i++)
    cout<< arr[i];

  cout<<endl;
  return 0;
}

/* Better Method :- Time Complexity: theta(n), Space Complexity: theta(d)

void lRotate (int arr[], int n, int d) {
  int temp[d];
  for (int i = 0; i < d; i++)
    temp[i] = arr[i];           // store d elements
  for (int i = d; i < n; i++)
    arr[i-d] = arr[i];          // shift remaining elements d places back
  for (int i = 0; i < d; i++)
    arr[n-d+i] = temp[i];       // put earlier stored d elements from dth index from the back
}
*/



/* Efficeint Method :- Time Complexity: theta(n), Space Complexity: theta(1)

void reverse(int arr[], int low, int high) {
  while (low < high) {
    swap (arr[low], arr[high]);
    low++;
    high--;
  }
}
void lRotate (int arr[], int n, int d) {
  reverse (arr, 0, d-1);    // reverse first d elements i.e. till (d-1)th index
  reverse (arr, d, n-1);    // reverse remaining elements
  reverse (arr, 0, n-1);    // reverse whole array
}
*/