#include <iostream>
using namespace std;

/* Naive Method :- Time Complexity: O(n^2) */

int maxProfit (int price[], int start, int end) {
  if (end <= start)   return 0;
  int profit = 0;
  for (int i = start; i < end; i++)
    for (int j = i+1; j <= end; j++) 
      if (price[i] < price[j]) {
        int curr_profit = price[j] - price[i] + 
                          maxProfit (price, start, i-1) + 
                          maxProfit (price, j+1, end);
        profit = max(profit, curr_profit);
      }
  return profit;
}

int main() {
  int arr[] = {1, 5, 3, 8, 12};
  int n = sizeof(arr) / sizeof(arr[0]);

  // int ans = maxProfit (arr, n);
  int ans = maxProfit (arr, 0, n-1);
  cout<< ans;

  cout<<endl;
  return 0;
}

/* Efficient Method :- Time Complexity: O(n)

int maxProfit (int price[], int n) {
  int profit = 0;
  for (int i = 0; i < n; i++)
    if (price[i] > price[i-1])
      profit += price[i] - price[i-1];
  return profit;
}
*/