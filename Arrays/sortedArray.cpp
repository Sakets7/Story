#include <iostream>
using namespace std;

/* Naive Method :-
bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) 
    for (int j = i + 1; j < n; j++)
      if (arr[i] > arr[j])
        return false;
  return true;     
}
*/
//Efficient Method :-
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++)
    if (arr[i] < arr[i-1])
      return false;
  return true;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n =sizeof(arr) / sizeof(arr[0]);

  int ans = isSorted(arr, n);
  cout<< ans;

  cout<<endl;
  return 0;
}