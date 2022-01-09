#include <iostream>
using namespace std;

int deleteX (int arr[], int n, int x) {
  int i;
  for (i = 0; i < n; i++){
    if (arr[i] == x) break;
  }
  if (i == n) return n;  // if(i == n) i.e. ele not found, then don't decrease the size and return n
  for (int j = i; j < n-1; j++) {
    arr[j] = arr[j+1];
  }
  return n-1;  // ele is found, so we decrease the size of the array as we have deleted one ele
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout<< n<< endl;
  for (int i = 0; i < n; i++){
    cout<< arr[i];
  }
  cout<< endl;
  int x = 3;
  n = deleteX (arr, n, x);
  for (int i = 0; i < n; i++){
    cout<< arr[i];
  }

  cout<<endl;
  return 0;
}