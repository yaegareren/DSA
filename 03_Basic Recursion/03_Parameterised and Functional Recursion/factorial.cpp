// parameterised and functional recursion

// Sum of first N numbers

// functional way

#include <bits/stdc++.h>
using namespace std;

int printfact(int Num)
{
  if (Num == 1)
    return 1;
  return Num *printfact(Num - 1);
}

int main()
{
  int N;
  cout << "enter N: " << endl;
  cin >> N;
  cout << printfact(N);
  return 0;
}

// TC -> O(N)
// SC -> O(N)