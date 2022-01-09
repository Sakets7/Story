#include <iostream>
using namespace std;

void freq (int arr[], int n) {
  int i = 1, freq = 1;
  while (i < n) {
    while (i < n && arr[i] == arr[i-1]) {
      freq++;
      i++;
    }                  // Time Complexity: theta(n)
    cout<< arr[i-1]<< ": "<< freq<< endl;
    i++;
    freq = 1;
  }
  if (n == 1 || arr[n-1] != arr[n-2])
    cout<< arr[n-1]<< ": 1";
}

int main() {
  int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  freq (arr, n);

  cout<<endl;
  return 0;
}