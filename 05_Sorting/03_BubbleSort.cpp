// BUBBLE SORT

/*
>> It works by repeatedly swapping the adjacent elements if they are in wrong order.

>> suitable for small data sets

>> it is known as bubble sort, because with every complete iteration the largest element bubbles up towards the last place or the highest index just like a water bubble rises up to the water surface.

>> time complexity: O(n^2) -> worst/avg
>> time complexity: O(n) -> best, if no swap is done

>> Working:
  >>> Starting with the first element(index = 0), compare the current element with the next element of the array.

  >>> If the current element is greater than the next element of the array, swap them.

  >>> If the current element is less than the next element, move to the next element.

  >>> Repeat step 1 till the list is sorted
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    int didSwap = 0;
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        didSwap = 1;
      }
    }
    if (didSwap == 0)
    {
      break;
    } // for best case
  }
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