// Difference between highest and least frequencies in an array

/*
Input  : arr[] = [7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5]
Output : 2
Lowest occurring element (5) occurs once.
Highest occurring element (1 or 7) occurs 3 times

Input  : arr[] = [1, 1, 1, 3, 3, 3]
Output : 0
*/

#include <bits/stdc++.h>
using namespace std;

int findDiff(int arr[], int n)
{
  unordered_map<int, int> map;

  for (int i = 0; i < n; i++)
  {
    map[arr[i]]++;
  }
  // find counts of maximum and minimum frequent elements
  int max_count = 0, min_count = n;
  for (auto x : map)
  {
    max_count = max(max_count, x.second);
    min_count = min(min_count, x.second);
  }
  cout << "max_count:" << max_count << endl;
  cout << "min_count:" << min_count << endl;
  return (max_count - min_count);
}

int main()
{
  int arr[] = {10, 5, 10, 15, 10, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = findDiff(arr, n);
  cout << "The difference between highest and lowest frequency is: " << res;
  return 0;
}

// TC: O(n) ; SC: O(n)