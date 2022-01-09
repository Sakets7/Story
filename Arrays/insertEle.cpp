#include <iostream>
using namespace std;

int insertX (int arr[], int n, int x, int pos) {    // (int*) can be used to return (arr)
  for (int i = n-1; i >= pos-1; i--) {
    arr[i+1] = arr[i];
  }
  arr[pos - 1] = x;
  return n+1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++){
    cout<<arr[i];
  }
  cout<<endl;
  int x = 9;
  int pos = 3;
  n = insertX (arr, n, x, pos);
  for (int i = 0; i < n; i++){
    cout<<arr[i];
  }

  cout<<endl;
  return 0;
}