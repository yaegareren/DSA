// print 1 to N

#include <bits/stdc++.h>
using namespace std;

void printN(int i, int Num)
{
  if (i == Num+1) return;
  cout <<i<<endl;
  printN(i+1, Num);
}

int main()
{
  int N, count = 0; 
  cout<<"enter N: "<<endl;
  cin>>N; 
  printN(1, N);
  return 0;
}
