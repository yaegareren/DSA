// Optimal approach: no sorted order
// TC: O(sqrt(n)) ; SC: O(1)

#include<bits/stdc++.h>
using namespace std; 

int main() {
  int n; 
  cout<<"Enter the number: ";
  cin>>n;
  cout<<"The divisors of "<<n<<" are: "<<endl;
  for(int i=1; i<=sqrt(n); i++) {
    if((n % i)==0){
      cout<<i<<" ";
      if(i != n/i ) cout << n/i << " ";
    }
  }
  return 0;
}


// Brute force approach: gives sorted series
// TC: O(n) ; SC: O(1)

// #include<bits/stdc++.h>
// using namespace std; 

// int main() {
//   int n; 
//   cout<<"Enter the number: ";
//   cin>>n;
//   cout<<"The divisors of "<<n<<" are: "<<endl;
//   for(int i=1; i<=n; i++) {
//     if((n % i)==0){
//       cout<<i<<" ";
//     }
// }
//   return 0;
// }

