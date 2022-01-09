#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
  int high = n-1, low = 0;
  while(low < high) {
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    low++;
    high--;
  }
}

int main() {
  int arr[] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  reverse(arr, n);

  for (int i = 0; i < n; i++)
    cout<< arr[i];

  cout<<endl;
  return 0;
}