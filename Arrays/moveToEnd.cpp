#include <iostream>
using namespace std;

void moveToEnd (int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++)
    if (arr[i] != 0) {
      swap(arr[i], arr[count]);
      count++;
    }
}

int main() {
  int arr[] = {1, 3, 0, 0, 2, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  moveToEnd(arr, n);
  
  for (int i = 0; i < n; i++)
    cout<< arr[i];

  cout<<endl;
  return 0;
}

/*
Naive Method :-  TC: O(n^2)

void moveToEnd (int arr[], int n) {
  for (int i = 0; i < n; i++)
    if (arr[i] == 0) {
      for (int j = i+1; j < n; j++)
        if (arr[j] != 0)
          swap(arr[i], arr[j]);
    }
}
*/