// print from n to 1 using backtracking 

#include <bits/stdc++.h>
using namespace std;

void printN(int i, int Num)
{
  if (i > Num) return;

  printN(i + 1, Num);
  cout << i << endl;
  
}

int main()
{
  int N;
  cout << "enter N: " << endl;
  cin >> N;
  printN(1, N);
  return 0;
}

/*
                      execution order
f(1,3) -> print(1)          3
f(2,3) -> print(2)          2
f(3,3) -> print(3)          1
f(4,3) since i greater than num, return statement is executed

*/
