// parameterised and functional recursion 

// Sum of first N numbers

// parameterised way

#include <bits/stdc++.h>
using namespace std;

void printSum(int Num, int Sum)
{
  if (Num < 1) { cout<<Sum; return; }
  printSum(Num - 1, Sum + Num);
}

int main()
{
  int N;
  cout << "enter N: " << endl;
  cin >> N;
  printSum(N, 0);
  return 0;
}

/*
        
f(4,0) 
f(3,4) 
f(2,7) 
f(2,7)       
f(0,10) since num = 0 which means num < 1, sum is printed

*/
