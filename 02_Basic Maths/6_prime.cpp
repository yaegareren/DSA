// optimized approach: TC -> O(sqrt(N))  ; SC -> O(1)

#include<bits/stdc++.h>
using namespace std; 

bool findPrime(int n1) {
  for(int i=2; i<sqrt(n1); i++){
    if(n1 % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int n; 
  cout<<"Enter the number: ";
  cin>>n; 

  bool ans  = findPrime(n);
  if(n != 1 && ans == true) {
    cout<<"Prime number";

  }
  else {
    cout<<"Not a prime number";
  }
  return 0;
}

