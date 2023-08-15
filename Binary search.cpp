#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int x;
  cin>>x;
  int m = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, x, 0, m - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
