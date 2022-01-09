#include <iostream>
using namespace std;

int getLargest(int arr[], int n) {
  int largest = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[largest])  largest = i;
  }
  return largest;
}

int secondLargest(int arr[], int n){
  int largest = getLargest(arr, n);
  int res = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[largest]) {
      if (res == -1) res = i;     
      else if (arr[i] > arr[res]) res = i;
  }
    }
  return res;
}
/* If we erase line 17, then in line 18 we can't check the condition as res = -1.
If we erase line 17 and write res = 0 in line 14, then we can check the condition in line 18 but
then if we don't have the 2nd largest element like in array {10, 10, 10} then it will print the 
element at arr[o] as it will not go into the if condition in line 16 ever.
So lines 14 and 17 are BLOODY important. */
int main() {
  int arr[] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  n = secondLargest(arr, n);
  cout<< arr[n];

  cout<<endl;
  return 0;
}