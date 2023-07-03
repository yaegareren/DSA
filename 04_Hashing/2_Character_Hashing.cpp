// character hashing

// 26 alphabets -> 0...25 indexing

#include <bits/stdc++.h>
using namespace std;

int main(int argc)
{
  string s;
  cin >> s;

  // precomputation
  int hash[26] = {0}; // n+1 value is taken as hash
  for (int i; i < s.size(); i++)
  {
    hash[s[i] - 'a']++;
  }

  int t;
  cin >> t;
  while (t--)
  {
    char c1;
    cin >> c1;
    // fetch
    cout << hash[c1 - 'a'];
  }
  return 0;
}

// int x = 'a' ; a is 97