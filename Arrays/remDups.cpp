#include <iostream>
using namespace std;

/* Efficient Method :- Time Complexity: O(n)   Auxillary Space: O(1) */
// Maintaining two variables (res and i) in one for loop 

int remDups (int arr[], int n) {
  int res = 1;
  for (int i = 1; i < n; i++)       
    if (arr[i] != arr[res-1]) {
      arr[res] = arr[i];
      res++; 
    }
  return res;
}

int main() {
  int arr[] = {1, 3, 3, 2, 5, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  n = remDups(arr, n);

  for (int i = 0; i < n; i++)
    cout<< arr[i];

  cout<< endl;
  return 0;
}

// Other solution is to copy the different elements in another array and then at last copy that array
// to the original array but there the Auxillary Space will be O(n).

/* Naive Method :- Time Complexity: O(n)    Auxillary Space: O(n)

int remDups(int arr[], int n) {
  int temp[n];
  temp[0] = arr[0];
  int res = 1;
  for (int i = 1; i < n; i++)
    if (temp[res-1] != arr[i]) {
      temp[res] = arr[i];
      res++;
    }
  for (int i = 0; i < res; i++)
    arr[i] = temp[i];
  return res;
}
*/