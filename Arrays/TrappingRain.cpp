#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: O(n^2) */
// finding lMax and rMax for each element as the loop iterates

int getWater(int arr[], int n) {
  int res = 0;
  for (int i = 1; i < n; i++) {
    int lMax = 0, rMax = 0;
    for (int j = 0; j <= i; j++)
      lMax = max(lMax, arr[j]);
    for (int j = i; j < n; j++)
      rMax = max(rMax, arr[j]);
    res = res + (min(lMax, rMax) - arr[i]);
  }
  return res;
}


int main() {
  int arr[] = {3, 0, 1, 2, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  int ans = getWater(arr, n);
  cout<< ans;

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: theta(n)    Auxillary Space: theta(n)
// finding lMax and rMax for each element all at once and stored it

int getWater(int arr[], int n) {
  int res = 0, lMax[n], rMax[n];
  lMax[0] = arr[0];
  for (int i = 0; i < n; i++)
    lMax[i] = max(arr[i], lMax[i-1]);
  rMax[n-1] = arr[n-1];
  for (int i = n-2; i >= 0; i--)
    rMax[i] = max(arr[i], rMax[i+1]);
  for (int i = 1; i < n-1; i++)
    res = res + (min(lMax[i], rMax[i]) - arr[i]);
  return res;
}
*/