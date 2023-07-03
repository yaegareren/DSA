/*
Quick Sort is a divide-and-conquer algorithm like the Merge Sort. But unlike Merge sort, this algorithm does not use any extra array for sorting(though it uses an auxiliary stack space). So, from that perspective, Quick sort is slightly better than Merge sort.

This algorithm is basically a repetition of two simple steps that are the following:

1. Pick a pivot and place it in its correct place in the sorted array.
2. Shift smaller elements(i.e. Smaller than the pivot) on the left of the pivot and larger ones to the right.

Pivot can be any element.

after shifting smaller elements to the right and bigger elements to the right, we get two unsorted arrays which need to be recursively sorted by choosing a pivot again.

initially low points to first index and high points to the last index, the index at which pivot will be placed is called partition index, recursively quicksort function is called on the two subarrays, the range of the left subarray will be [low to (partition index – 1)] and the range of the right subarray will be [(partition index + 1) to high].

Recursion will continue until the range becomes 1 because

elements are shifted on left and right using a partition function

to implement partition function in order to get the partition index:

1. Inside the function, we will first select the pivot(i.e. arr[low] in our case).
2. Now, we will again take two-pointers i and j. The i pointer points to low and the j points to high.
3. Now, the pointer i will move forward and find the first element that is greater than the pivot. Similarly, the pointer j will move backward and find the first element that is smaller than the pivot.
4. Here, we need to add some checks like i <= high-1 and j >= low+1. Because it might happen that i is standing at high and trying to proceed or j is standing at low and trying to exceed.
5. Once we find such elements i.e. arr[i] > pivot and arr[j] < pivot, and i < j, we will swap arr[i] and arr[j].
6. We will continue step 3 and step 4, until j becomes smaller than i.
Finally, we will swap the pivot element(i.e. arr[low]) with arr[j] and will return the index j i.e. the partition index.

Time Complexity: O(N*logN), where N = size of the array.

Reason: At each step, we divide the whole array, for that logN and n steps are taken for the partition() function, so overall time complexity will be N*logN.

The following recurrence relation can be written for Quick sort :

F(n) = F(k) + F(n-1-k)

Here k is the number of elements smaller or equal to the pivot and n-1-k denotes elements greater than the pivot.

There can be 2 cases :

Worst Case – This case occurs when the pivot is the greatest or smallest element of the array. If the partition is done and the last element is the pivot, then the worst case would be either in the increasing order of the array or in the decreasing order of the array.

Recurrence:
F(n) = F(0)+F(n-1)  or  F(n) = F(n-1) + F(0)

Worst Case Time complexity: O(n2)

Best Case – This case occurs when the pivot is the middle element or near to middle element of the array.
Recurrence :
F(n) = 2F(n/2)

Time Complexity for the best and average case: O(N*logN)

Space Complexity: O(1) + O(N) auxiliary stack space.

*/

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }

    while (arr[j] > pivot && j >= low + 1)
    {
      j--;
    }
    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void qs(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int Pindex = partition(arr, low, high);
    qs(arr, low, Pindex - 1);
    qs(arr, Pindex + 1, high);
  }
}

vector<int> quickSort(vector<int> arr)
{
  qs(arr, 0, arr.size() - 1);
  return arr;
}

int main()
{
  vector<int> arr = {9, 4, 7, 6, 5, 1};
  int n = arr.size();

  cout << "Before Sorting Array: ";
  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";
  cout << endl;
  arr = quickSort(arr);

  cout << "After Sorting Array: ";
  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";

  return 0;
}
