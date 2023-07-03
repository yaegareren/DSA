// parameterised and functional recursion

// Sum of first N numbers

// functional way

#include <bits/stdc++.h>
using namespace std;

int printSum(int Num)
{
  if (Num == 0) return 0; 
  return Num + printSum(Num-1); 
}

int main()
{
  int N;
  cout << "enter N: " << endl;
  cin >> N;
  cout<<printSum(N);
  return 0;
}