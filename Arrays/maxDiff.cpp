#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: O(n^2) */

int maxDiff (int arr[], int n) {
  int res = arr[1] - arr[0];
  for (int i = 0; i < n; i++) 
    for (int j = i+1; j < n; j++)
      res = max (res, arr[j]-arr[i]);
  return res;
}

int main() {
  int arr[] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int d;
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  int res = maxDiff(arr, n);
  cout<< res;

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: O(n)
// Traversing the array and keeping track of smallest element and then subtracting it from the 
array elements to get the max difference.

int maxDiff (int arr[], int n) {
  int res = arr[1] - arr[0];
  int minVal = arr[0];
  for (int j = 1; j < n; j++) {
    res = max (res, arr[j]-minVal);
    minVal = min (minVal, arr[j]);
  }
  return res;
}
*/