// #include<bits/stdc++.h>
// using namespace std; 

// string num_reverse(int n) { 
//   string s; 
//   s = to_string(n); 
//   reverse(s.begin(), s.end()); 
//   return s; 
// }
// int main() { 

//   int num; 
//   cout<<"Enter a number: "; 
//   cin>> num; 

//   cout<<"The reverse of "<<num<<" is "<<num_reverse(num); 
//   return 0; 
// }

 #include<bits/stdc++.h>
 using namespace std; 

 int main() { 
  string s, rev_str; 
  cout<<" Enter your string: ";
  getline(cin, s); 

  int len; 
  len = s.length(); 
  for(int i= len-1; i>= 0; i--) { 
    rev_str.push_back(s[i]); 
  }

  cout<<"Reverse string: "<<rev_str; 
   
 }