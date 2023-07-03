#include<bits/stdc++.h>
using namespace std; 

int digit(int n) { 
  string s; 
  s = to_string(n);
  return s.length(); 

}

int main() { 
  int num; 
  cout<<"Enter the number: "; 
  cin>>num; 
  cout<<digit(num);
}

