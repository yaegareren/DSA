/*
Merge sort is a divide and conquer algorithm. It divides the given array into equal parts and then merges the two sorted arrays.

we recursively split the array, and go from top down until all sub arrat size becomes 1

time complexity : O(nlogn) // dividing the array at each step - log n and n steps to get to sorted array

space complexity : O(n) // using a temporary array to store elements in sorted order

*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;    // temporary array
  int left = low;      // starting index of left half array
  int right = mid + 1; // starting index of right half array

  // storing elements in temporary array in a sorted order

  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  // if elements on left half are still left

  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }

  // if elements on right half are still left

  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }

  // transferring all elements from temporary to arr

  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}

void mergeSort(vector<int> &arr, int low, int high)
{

  if (low >= high)
    return;

  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);      // left half
  mergeSort(arr, mid + 1, high); // right half
  merge(arr, low, mid, high);    // merging sorted halves
}

int main()
{
  vector<int> arr = {9, 4, 7, 6, 5, 1};
  int n = arr.size();

  cout << "Before Sorting Array: ";
  for (int i = 0; i < n; i++)
    std::cout << arr[i];
  cout << endl;
  mergeSort(arr, 0, n - 1);

  cout << "After Sorting Array: ";
  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";

  return 0;
}
