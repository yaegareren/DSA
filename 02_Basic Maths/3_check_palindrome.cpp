#include<bits/stdc++.h>
using namespace std; 

int main()  { 
  string s, rev_str; 
  cout<<" Enter your string: ";
  getline(cin, s); 

  int len; 
  len = s.length(); 
  for(int i= len-1; i>= 0; i--) { 
    rev_str.push_back(s[i]); 
  }

  cout<<"Reverse string: "<<rev_str<<endl;   

  if(rev_str == s){
    cout<<"it's a palindrome"; 

  }
  else
    cout<<"Not a palindrome"; 

}