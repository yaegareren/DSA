// print 1 to N using backtracking

#include <bits/stdc++.h>
using namespace std;

void printN(int i, int Num)
{
  if (i < 1) return;
  printN(i - 1, Num); // recursive call before printing the value
  cout << i << endl;
}

int main()
{
  int N, count = 0;
  cout << "enter N: " << endl;
  cin >> N;
  printN(N, N);
  return 0;
}

/*
                      execution order 
f(3,3) -> print(3)          3
f(2,3) -> print(2)          2
f(1,3) -> print(1)          1
f(0,3) since i less than 0,  return statement is executed

*/
