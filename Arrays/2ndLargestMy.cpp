#include <iostream>
using namespace std;

int getLargest(int arr[], int n) {
  int res = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[res])  res = i;
  }
  return arr[res];
}


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
  int arr[] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int x = getLargest(arr, n);
  cout<<"largest element: "<< x<< endl;

  
  n = deleteX (arr, n, x);
  cout<< "largest element deleted"<< endl;
  for (int i = 0; i < n; i++){
    cout<< arr[i];
  }
  cout<< endl;

  int ans = getLargest(arr, n);
  cout<< "2nd largest element: "<< ans;


  cout<<endl;
  return 0;
}