#include <iostream>
using namespace std;

int getLargest(int arr[], int n) {
  int res = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[res])  res = i;
  }
  return arr[res];
}

int main() {
  int arr[] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = getLargest(arr, n);
  cout<< ans;

  cout<<endl;
  return 0;
}