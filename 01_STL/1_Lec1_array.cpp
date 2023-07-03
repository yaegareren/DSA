/*
#include<bits/stdc++.h>
using namespace std;
 namespace shree{
  int val=50;
  int getval(){
    return val*50;
  }
 }

int main()
{
  double val=10.0;
  cout<<val<<endl;   //prints 10.0

  cout<<shree::val<<endl; //prints 50
  cout<<shree::getval()<<endl; //prints 2500

  return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

struct node {
  string str;
  int num;
  double d;
  char x;

  node(str_,num_,double_,x_){
    str = str_;
    num = num_;
    d = double_;
    x=x_; 
  }
};

int main()
{
  node *shree= new node("striver", 79, 91.0, "o");
  // another way  
  node shree=  node("striver", 79, 91.0, "o");
  
  return 0;
}


*/

  // array of size 100: arr[100]
  
   // CONTAINER ARRAY:

  // array<int, 3> arr;  // {?, ?, ?}
  
  // if arrays are declared globally then every element is intialized with 0. But if they are declared inside main() then every element is initialized as a garbage value. 

  // array<int, 5> = {1, 6, 5}  ---->{1, 6, 5, 0, 0}
  
  /*
  array<iny, 5> arr;
  arr.fill(5);  -----> {5, 5, 5, 5, 5}  
  
  arr.at(index) -----> to index the element. Example: arr.at(2) will give output 5 

  to iterate the array:
    for(int i=0; i <n; i++){
      cout<<arr.at(i)<<" ";
    }
  
  */