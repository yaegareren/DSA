// check if a string is palindrome

#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s )
{
  if(i >= s.size() / 2) return true; 
  if (s[i] != s[s.size()-i-1]) return false; 
  return f(i+1, s); 
}

int main()
{
  string s = "madam";
  cout<<f(0,s); 
  return 0;
}

/*

f(0) -> i = 0 -> s[0] == s[4]
f(1) -> i = 1 -> s[1] == s[3]
f(2) -> i = 2 -> 2 > = 2 is satisfied and true is returned 

*/

// TC -> O(N/2)
// SC -> O(N/2)