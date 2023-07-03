// find frequency of elements in an array

#include <bits/stdc++.h>
using namespace std;

int main(int argc)
{
  int n;
  cin >> n;
  int arr[n];

  // taking array input
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // precomputation
  int hash[13] = {0}; // n+1 value is taken as hash
  for (int i; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  int t;
  cin >> t;
  while (t--)
  {
    int number;
    cin >> number;
    // fetch
    cout << hash[number];
  }
  return 0;
}

/*
say array has 10^9 numbers, we cannot declare a 10^9+1 array

for int array:
arr[10^6] -> main(local declaration)
arr[10^7] -> (global declaration)

for bool array:
arr[10^7] -> main(local declaration)
arr[10^8] -> (global declaration)

*/

// TO STORE > 10^7 ELEMENTS IN AN ARRAY

// find frequency of elements in an array

/*

#include <bits/stdc++.h>
using namespace std;

int main(int argc)
{
  int n;
  cin >> n;
  int arr[n];

  // taking array input
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // precomputation
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  int t;
  cin >> t;
  while (t--)
  {
    int number;
    cin >> number;
    // fetch
    cout << mpp[number];
  }
  return 0;
}

*/

/*
To iterate in a map

for(auto it:map){
  cout<<it.first<<" "<<it.second<<endl;
}

similarly for character arrays
map<char, int>
mpp[s[i]++]

*/
