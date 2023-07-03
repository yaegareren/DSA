/*
Count frequency of each element in the array

Problem statement: Given an array, we have found the number of occurrences of each element in the array.
*/

/*

Input: arr[] = {10,5,10,15,10,5};

Output: 10  3
      	 5  2
        15  1
        
Explanation: 10 occurs 3 times in the array
	            5 occurs 2 times in the array
             15 occurs 1 time in the array

*/

// iterative solution: TC: O(N*N) ; SC: O(N)

/*
approach: 
>> make a visited array of type boolean 
>> use the first loop to point to an element in the array 
>> Initialize the variable count to 1
>> Make that index true in the visited array 
>> Run second loop, if we find the element then mark the visited index true and increase the count 
>> If the visited index is already true then skip the other steps  
*/

#include<bits/stdc++.h>
using namespace std; 

void countFreq(int arr[], int n) {
  vector<bool> visited(n, false);

  for(int i= 0; i < n; i++) {
    //skip this element if already processed 
    if (visited[i] == true) continue;

    // count frequency 
    int count = 1; 
    for(int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        visited[j] = true; 
        count++; 
      }
    }
    cout <<arr[i]<<" "<<count<<endl;
  }
}

int main() { 
  int N;
  cout<<"Enter the number of elements: "<<endl;
  cin>>N;
  int arr[N]; 
  for(int i=0; i<N; i++) {
    cin>>arr[i];
  }
  int num_element = sizeof(arr) / sizeof(arr[0]) ; 
  countFreq(arr, num_element);
  return 0; 
}

