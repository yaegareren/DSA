#include <bits/stdc++.h>
using namespace std;

int cnt = 0; 

void func() {
  if(cnt ==3) return; 
  cout<<cnt<<endl;
  cnt++;
  func();
}

int main() {
  func(); 
  return 0; 
}

// stack overflow can happen if multiple recursive calls are waiting in stack space 

