/*
Approach:

iterative method:

1. Take an element from the unsorted array(using an outer loop).

2. Place it in its corresponding position in the sorted part(using an inner loop).

3. Shift the remaining elements accordingly.

Now, in the recursive approach, we will just select the element recursively instead of using any loop. This is the only change we will do the recursive insertion sort algorithm and the rest of the part will be completely the same as it was in the case of iterative insertion sort.
approach:

1. First, call the recursive function with the given array, the size of the array, and the index of the selected element(let’s say i).

2. Inside that recursive function, take the element at index i from the unsorted array.

3. Then, place the element in its corresponding position in the sorted part(using swapping).

4. After that, Shift the remaining elements accordingly.

5. Finally, call the recursion increasing the index(i) by 1.
The recursion will continue until the index reaches n(i.e. All the elements are covered).
Base Case: if(i == n) return;

*/
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int i, int n)
{
  // base case :
  if (n == 1)
    return;

  int j = i;
  while (j > 0 && arr[j - 1] > arr[j])
  {
    int temp = arr[j - 1];
    arr[j - 1] = arr[j];
    arr[j] = temp;
    j--;
  }

  insertionSort(arr, i + 1, n);
}

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
    std::cin >> arr[i];

  insertionSort(arr, 0, n);

  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";

  return 0;
}

//  TC: O(N^2) -> worst/avg
//  TC: O(N) -> best
// SC: O(N) -> auxiliary stack space