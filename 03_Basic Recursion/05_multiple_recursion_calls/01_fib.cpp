// Fibonacci sequence
// 0 1 1 2 3 5 8 13 21 34 ...... 

// f(n) = f(n-1) + f(n-2)

/*
f[0] =0 ; f[1] = 1; 
for(i = 2 -> n) {
  f[i] = f[i-1] + f[i-2]
}
iterative solution
*/

#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
  if(n <= 1) return n; 
  int last = fib(n-1);
  int slast = fib(n-2);
  return last + slast; 
}

int main()
{
  cout<<fib(4); // 3
  return 0;
}


/*

                    fib(4)

          fib(3)              fib(2)

    fib(2)    fib(1)    fib(1)      fib(0)

fib(1) fib(0)

*/

/*
TC : O(2^n)
SC : O(N)

*/

