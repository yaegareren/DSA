// INSERTION SORT

/*

 TC: O(N^2) -> worst/avg
 TC: O(N) -> best
 Take an element and place it into its correct position

>> Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.

>> It is a sorting algorithm that builds the final sorted array (or list) one item at a time.

>> Eficient for (quite) small data sets, much like other quadratic sorting algorithms.

>> More efficient in practice than most other simple quadratic (i.e., O(n^2)) algorithms such as selection sort or bubble sort.

working:

step 1. Pick next element

step 2. Compare with all elements in the sorted sub-list on the left

step3. Shift all elements in the sorted sub-list that is greater than the value to be sorted.

step4. Insert the value

step5. Repeat until list is sorted

*/
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
    std::cin >> arr[i];

  insertionSort(arr, n);

  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";

  return 0;
}