// print name 5 times 

#include<bits/stdc++.h>
using namespace std; 

void printName(int count) {
  if(count == 5) return; 
  cout<<"Shree Mangalam"<<endl; 
  count +=1; 
  printName(count); 

}

int main() 
{
  int count = 0; 
  printName(count); 
  return 0;
}

