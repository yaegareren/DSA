// SELECTION SORT

/*

Selection Sort Algorithm :

>> in-place comparision sort
>> O(n^2) --> inefficient for large lists
>> Algorithm divides lists into two parts
>> the sublist of items remaining to be sorted that occupy the rest of the list
>> Initially, the sorted sublist is empty and the unsorted sublist is the entire input list.
>> The algorithm proceeds by finding the smallest (or largest, depending on sorting order ) element in the unsorted sublist, exchanging(swapping) it with the leftmost unsorted element (putting it in sorted order) and moving the sublist boundaries one element to the right.

*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 2; i++)
  {
    int min = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
    std::cin >> arr[i];

  selectionSort(arr, n);

  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";

  return 0;
}