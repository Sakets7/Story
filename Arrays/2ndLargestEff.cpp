/* If arr[i] > arr[largest] --> then res = largest and largest = i
  If arr[i] = arr[largest] --> ignore
  If arr[i] < arr[largest] --> i)  res == -1         -> res = i
                              ii)  arr[i] > arr[res] -> res = i
                              iii) arr[i] = arr[res] -> ignore
                              iv)  arr[i] < arr[res] -> ignore 
*/
#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
  int res = -1;
  int largest = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[largest]) {
      res = largest;
      largest = i;
    }
    else if (arr[i] < arr[largest]) {
      if (res == -1 || arr[i] > arr[res])   res = i;
    }
  }
  return res;
}

int main() {
  int arr[] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  n = secondLargest(arr, n);
  cout<< arr[n];

  cout<<endl;
  return 0;
}
