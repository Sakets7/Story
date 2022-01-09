  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int d;
  for (int i = 0; i < n; i++)
    cout<< arr[i];
  cout<< endl;

  lRotate(arr, n, d=2);
  for (int i = 0; i < n; i++)
    cout<< arr[i];