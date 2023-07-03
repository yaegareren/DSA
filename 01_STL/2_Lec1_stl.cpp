// ITERATORS
   
   /*
    begin(), end(), rbegin(), rend()

    begin() ----> points to the first element 

    rbegin() ----> points to the last element. Stands for reverse begin

    end () ---> points to the empty space after last element 

    rend() ----> points to right before the start of first element. Stands for reverse end
  
   */

/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{  
   
   array<int, 5> arr = {1, 3, 4, 5, 6} ;
  
    for(auto it= arr.begin(); it!= arr.end(); it++) {    
      cout<< *it << " "; // normal order is printed    
    }
    cout<<endl;

    for(auto it= arr.rbegin(); it!= arr.rend(); it++) {
      cout<< *it << " ";   // reverse is printed
    }
    cout<<endl;

    for(auto it= arr.end()-1; it>= arr.begin(); it--) {
      cout<< *it << " ";   // reverse is printed
    }
    cout<<endl;
    
    // for each loop
    for(auto it: arr){
      cout<<it<<" "; // normal order is printed
    }
    cout<<endl;

    string s= "xhwnenw";
    for(auto c: s){   // iterates over the character
      cout<<c<<" "; // normal order is printed
    }


    // size of array 
    cout<<arr.size();

    // front
    cout<<arr.front();  // arr.at(0);

    // back
    cout<<arr.back(); // arr.at(arr.size-1);


  return 0;   
}

*/

/* if an array is declared locally the maximum size it
   can take is 10^6 (int, double, char). If it is declared globally then the maximum size it can take is 10^7 (int, double, char).

   For bool, globally  ----> 10^8
             locally   ----> 10^7
*/


/* VECTOR  */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  // size increases dynamically
  vector<int> arr; // -> { }

  cout<< arr.size()<<endl; // -> prints 0

  arr.push_back(0); // -> {0}
  arr.push_back(2); // -> {0, 2}

  cout<< arr.size()<<endl; // -> prints 2
  
  arr.pop_back(); // -> pops out 2 and array becomes {0}
  cout<< arr.size()<<endl; // -> prints 1

  arr.push_back(5);
  arr.clear(); // erase all element at once
  cout<< arr.size();  // prints 0
  

  vector<int> vec1(4,0); // --> {0,0,0,0}

  vector<int> vec2(4,10); 
  
  // to copy vec 2 into vec 3

  vector<int> vec3 (vec2.begin(), vec2.end());
  // vector<int> vec3 (vec2);  -->another method

  vector <int> shree;
  shree.push_back(1); // shree.emplace_back(1);
  shree.push_back(2);
  shree.push_back(3);
  shree.push_back(4);
  shree.push_back(5);  // {1,2,3,4,5}
  
  // to have a vector shree2 that only contains {1,2,3}

  vector<int> shree2 (shree.begin(), shree.begin()+3);
  cout<<shree2.size();
    //  {1,2,3,4,5}
    //   ^     ^
    //   begin begin+3 

    //   begin+3 is excluded and elements before that are selected  

    return 0; 
}

// lower bound, upper bound

  // swap two vectors ---> swap(v1, v2)
  // begin(), end(), rbegin(), rend() 