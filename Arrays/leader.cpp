#include <iostream>
using namespace std;

/* Efficient Method :- Time Complexity: O(n^2)  Auxillary Space: O(1) */

void leader (int arr[], int n) {
  int curr_leader = arr[n-1];
  cout<< curr_leader<< endl;
  for (int i = n-1; i >= 0; i--) {
    if (curr_leader < arr[i]) {
      curr_leader = arr[i];
      cout<< curr_leader<< endl;
    }
  }
}

int main() {
  int arr[] = {5, 3, 4, 1, 2};    // 2, 4 and 5 are leaders as there is no number greater to the right of each one 
  int n = sizeof(arr) / sizeof(arr[0]);                                             // of them separately.  
  int d;
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  leader(arr, n);

  cout<<endl;
  return 0;
}

/* 
Naive Method :- Time Complexity: O(n^2)  Auxillary Space: O(1) 

void leader (int arr[], int n) {
  for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = i+1; j < n; j++) 
      if (arr[i] <= arr[j]) {
        flag = false;
        break;
      }
    if (flag)  cout<< arr[i];    
  }
}
*/