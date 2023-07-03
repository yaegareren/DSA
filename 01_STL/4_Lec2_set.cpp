// arrays vectors struct

// set map

// set

// given n elements, find the number of unique elements

// {1,2,5,1,2} --> {1,2,5}

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  set <int> st; // doesn't store duplicate elements and stores them in ascending order
  int n;
  cin>> n;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    st.insert(x);  // takes logarithmic of the container size
    // st.insert(6)---->st.emplace(6)
  }

  for(auto it: st){
      cout<<it<<" "; // normal order is printed
    }
    cout<<endl;
  /*
   first index is always the smallest element

   second index is always the second smallest element
   
   third index is always the third smallest element

   to access the elements in set:
    *st.begin()  --> 1
    *st.begin()+1  --> 2
   

   st -> {1,2,5}
   erase functionality

   st.erase(st.begin()); ---> st.erase(iterator)  ---> {2,5}

   st.erase(st.begin(),st.begin()+2); ---> st.erase(iterator) [) ---> {5}

   st.begin() points to 1 
   st.begin()+2 points to 5
  */

  st.erase(st.begin());
  // st.erase(st.begin(),st.begin()+2);

  // another way to delete
  st.erase(5); //st.erase(key) // deletes 5

  for(auto it: st){
      cout<<it<<" "; // normal order is printed
    }
    cout<<endl;
  
  set <int> st1 = {1,5,7,8};
  set<int> st2(st.begin(), st.end()); // to copy the elements
  
  // to find position of element
  auto it = st.find(7); // it will be iterator to 7
  cout<<*it;

  auto it = st.find(9); // it=st.end()
  
  set<int> st5;
  st5.insert(5);  // -> {5}
  st5.insert(5); // -> {5}
  st5.insert(6); // -> {5,6}

  // deletes the entire set
  st5.erase(st5.begin(), st5.end());

  // UNORDERED SET

  unordered_set<int> st7;
  st7.insert(2);
  st7.insert(3);
  st7.insert(1);

  // no order of storing elements 
  // operations are same

  // average time complexity is O(1)
  // worst case time complexity is linear in size, O(set size)
  // first preference -> unordered_set
  // tle -> switch to set 

  // MULTISET

  multiset<int> ms; // it helps to store all the elements in sorted fashion 

  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(2);
  ms.insert(3);   // ms.emplace(3)

  //ms --> {1, 1, 2, 2, 3}

  // to find the number of instances
  // ms.count(2);

  ms.erase(2); // all the instances will be erased 

  auto it= ms.find(2);
  cout<<*it;

  ms.clear(); // clears everything
  ms.erase(ms.begin(),ms.end()); // clears the entire set
  // log n in size
  
  for(auto it : ms) {
    cout<<it<<endl;
  }

  // ms.erase(ms.find(2));
  // ms.erase(ms.find(2), ms.find(2) +2);

  return 0;


 }