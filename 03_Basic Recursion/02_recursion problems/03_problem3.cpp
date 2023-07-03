// print from n to 1

#include <bits/stdc++.h>
using namespace std;

void printN(int i, int Num)
{
  if (i < 1)
    return;
  cout << i << endl;
  printN(i - 1, Num);
}

int main()
{
  int N, count = 0;
  cout << "enter N: " << endl;
  cin >> N;
  printN(N, N);
  return 0;
}
