/*
In iterative algorithm, we usually select a range (using a loop), and for each range, we repeatedly swap (using another loop) the adjacent elements (if arr[i]>arr[i+1]) until the maximum element in that range reaches the end.

in recursive approach, we select the range recursively.

The approach will be the following:

1. First, call the recursive function with the given array and the range of n(size of the array).

2. Inside that recursive function, repeatedly swap 2 adjacent elements if arr[j] > arr[j+1].
Here, the maximum element of the unsorted array reaches the end of the unsorted array after each recursive call.

3. Each time after step 2, call the recursion again decreasing the range by 1.

4. The recursion will continue until the range(i.e. the size) of the array is reduced to 1.
Base Case: if(n == 1) return;

*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  // base case : range == 1
  if (n == 1)
    return;

  for (int j = 0; j <= n - 2; j++)
  {
    if (arr[j] > arr[j + 1])
    {
      int temp = arr[j + 1];
      arr[j + 1] = arr[j];
      arr[j] = temp;
    }
  }

  bubbleSort(arr, n - 1);
}

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
    std::cin >> arr[i];

  bubbleSort(arr, n);

  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";

  return 0;
}