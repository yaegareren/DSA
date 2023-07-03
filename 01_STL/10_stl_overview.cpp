/* 
C++ STL divided into 4 parts :

1. Algorithms
2. Containers
3. Functions
4. Iterators

*/

#include<bits/stdc++.h>
using namespace std;


int main() {

  return 0;

}

  void explainPair() {
    pair <int, int> p = {1, 3};

    cout<<p.first<<p.second;

    pair <int, pair<int, int>> p = {1, {3, 4}};

    cout<< p.first << " " << p.second.second << " " << p.second.first;

    pair <int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}}; 

    cout<< arr[1].second; // prints 5


  }

  
  void explainVector() { 

    vector <int> v; // dynamic array 

    // maintained by a singly linked list 

    v.push_back(1); 
    v.emplace_back(2); 

    vector<pair<int, int>>vec; 
    
    // both insert (1, 2) in v 
    v.push_back({1, 2}); 
    v.emplace_back(1, 2); 

    vector<int> v(5, 100); // {100, 100, 100, 100, 100}

    vector<int> v(5); // {0, 0, 0, 0, 0} 

    // even after declaring vector's size, we can still increase it's size 

    vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v2(v1); // a copy vector v2 is created from v1 

    // say, vector v has values {10, 20, 30, 40, 50}

    vector<int>::iterator it = v.begin(); 
    // iterators point to the memory address where element is located 
    // it can be user defined 
    // v.begin() means it began from the first index 
    // since we have to access the value at  a memory address, we use pointer. 
    // v.begin() points to the memory 

    it++;
    // it ++  means it is moving to the next memory location. Data is stored in contiguous locations.  

    cout<< *(it) << " "; // prints 20

    it = it + 2; 
    cout<< *(it)<<" "; // prints 40 

    vector<int>:: iterator it = v.end(); // points to the memory location right after 40

    vector<int>:: iterator it = v.rend(); // points to memory location right before 10 
    
    vector<int>:: iterator it = v.rbegin(); // points to memory location where 40 is present

    cout<<v[0]; // prints 10

    cout<< v.back() << " "; // prints 50 

    // printing the entire vector 

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) { 
      cout<< *(it) << " "; 
    }


    
    // another way to print it 

    for (auto it = v.begin(); it != v.end(); it++) {
      cout << *(it) << " "; 
    }

    // using the for each loop to print the vector 

    for(auto it : v) { 
      cout<< it << " "; 

    }

    // {10, 20, 12, 23}
    v.erase(v.begin()+1); // deletes 20 


   // {10, 20, 12, 23, 35}
   v. erase(v.begin() + 2, v.begin() + 4) // {10, 20, 35} --> [start, end)



    // INSERT FUNCTION 

    vector<int>v (2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10) // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50) // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}

    cout<< v.size(); // gives size of vector 

    v.pop_back(); // deletes the last element 

    // v1 -> {10, 20}
    // v2 -> {20, 30}
    v1.swap(v2);  // v2 -> {10, 20} ; v1 -> {20, 30}

    v.clear(); // erases the entire vector

    cout<< v.empty() // checks if vector is empty  
  }


void explainList() {
   list<int> ls;  // maintained by a doubly linked list 

   ls.push_back(2); // {2}
   ls.emplace_back(4); // {2, 4}

   ls.push_front(5); // {5, 2, 4}

   // in vector, we had to use insert function which was costlier

   ls.emplace_front(); {2, 4}; 

   // rest functions same as vector 
   // begin(), rbegin(), rend(), end(), clear(), insert(), size(), swap()
      
   }

void explainDeque() { 
  deque<int> dq; 
  dq.push_back(1); // {1}
  dq.emplace_back(2); // {1, 2}
  dq.push_front(4); // {4, 1, 2}
  dq.emplace_front(3); // {3, 4, 1, 2}

  dq.pop_back(); // {3, 4, 1}
  dq.pop_front(); // {4,1}

  dq.back(); 

  dq.front(); 

   // rest functions same as vector 
   // begin(), rbegin(), rend(), end(), clear(), insert(), size(), swap()
      

}

void explainStack() {  

  // stack -> LIFO 

  stack<int> st; 
  st.push(1); // {1}
  st.push(2); // {2, 1}
  st.push(3); // {3, 2, 1}
  st.push(3); // {3, 3, 2, 1}
  st.emplace(5); // {5, 3, 3, 2, 1}

  cout<<st.top(); // prints 5 "** st[2] is invalid **"

  st.pop(); // st looks like {3, 3, 2, 1}

  cout<<st.top(); // 3

  cout<<st.size(); // 4
  
  cout<<st.empty(); // checks if stack is empty

  stack <int> st1, st2; 
  st1.swap(st2); 

  // all operations are in O(1) T.C.


}

void explainQueue()  { 

    // queue -> FIFO 
  queue <int> q; 
  q.push(1); // {1}
  q.push(2); // {1, 2}
  q.emplace(4); // {1, 2, 4}

  q.back() += 5; 
  cout<<q.back(); // prints 9 

  // queue is {1, 2, 9}
  cout<<q.front(); //prints 1

  q.pop(); // {2, 9}

  cout<< q.front(); // prints 2

  // size(), swap(), empty() same as stack
}

void explainPQ () {
  priority_queue<int> pq; 

  // largest character/integer stays at the top 
  // known as max heap also 

  pq.push(5); // {5}
  pq.push(2); // {5, 2}
  pq.push(8); // {8, 5, 2}
  pq.emplace(20); // {20, 8, 5, 2}

  cout<< pq.top(); // prints 20

  pq.pop(); //{8, 5, 2}

  cout<< pq.top(); // prints 8

  // size(), swap(), empty() function same as others

  // Minimum heap 

  priority_queue<int, vector<int>, greater<int>> pq; 
  pq.push(5); // {5}
  pq.push(2); // {2, 5}
  pq.push(8); // {2, 5, 8}
  pq.emplace(20); // {2, 5, 8, 20} 

  cout<< pq.top(); // prints 2

// push operation -> O(log N)
// pop operation -> O(log N)
// top operation -> O(1)

}

void explainSet() {

  // stores every element in sorted order and only unique elements 
   set<int> st; 
   st.insert(1); // {1}
   st.emplace(2); 
   st.insert(2); // doesn't store 
   st.insert(4); // {1, 2, 4}
   st.insert(3); // {1, 2, 3, 4}

  // {1, 2, 3, 4, 5}
  auto it = st.find(3); // returns an iterator which points to this 3

  auto it = st.find(6); // if an element is not present in the state, it will always return the iterator pointing to st.end(), so here iterator points after 5 

  st.erase(5); // deletes 5 from the set and maintains the sorted order -> takes logarithmic time 

  int count = st.count(1); 
  // if an element is present in set, it will return 1 else it will return 0. This is because an element can only occurr once in a set. 

  auto it = st.find(3); 
  st.erase(it); 

  // deletes 3 from set 

  // {1, 2, 3, 4, 5}

  auto it1 = st.find(2); 
  auto it2 = st.find(4); 
  st.erase(it1, it2); // deletes 2 and 3 from the set. Same shit as vector 
  // other functions of set such as size, swap etc. are same as vector 

  // lower_bound() and upper_bound() function works in the same way as it does in vector

  auto it = st.lower_bound(2); 

  auto it = st.upper_bound(3); 

// in set all operations take place in logarithmic time complexity   
}

void explainMultiset() {
   // same as set but it can store duplicates element as well. However, it does so in sorted order. 


   multiset<int> ms; 

  ms.insert(1); 
  ms.insert(1); 
  ms.insert(1); // {1, 1, 1}

  ms.erase(1); // all 1's are erased 

  // only a single one erased
  ms.erase(ms.find(1));

  ms.erase(ms.find(1), ms.find(1)+ 2); // erases all 1's 

  // rest all functions are same 


}

void explainUset() { 
  unordered_set<int> ust; 

  // stores unique elements but doesn't arrange them in sorted order, rather arranges them in a randomized manner

  // in most cases time complexity is of O(1)

  // only goes to O(n) when some collision happens or data is arranged in a manner that requires us to explore the worst case 

  // lower_bound() and upper_bound() function do not work 


}

void explainMap() {

  // map stores everything in this format {key, value}
  // key and vbalue can have any value 


  map<int, int> mpp;

  map<pair<int, int>, int> mpp1;
  map<int, pair<int, int>> mpp2;

  // duplicate values, unique key (must)
  // map stores unique keys in sorted order

  mpp[1] = 2; // stored as {key, value} -> {1, 2}

  mpp.emplace(3,1); // stored as {3, 1}
  mpp.insert({2, 4}); // stored as {2, 4}

/*
  {
    {1, 2}
    {2, 4}
    {3, 1}
  }
*/

// to traverse the entire map using a for each loop 

for(auto it: mpp) {
  cout<< it.first<< " " << it.second << endl; 
  
}

cout<<mpp[1]; // prints 2
cout<<mpp[2]; // prints 4
cout<<mpp[5]; // prints 0 or NUll because the key doesn't exist

mpp1[{2, 3}] = 10; // here pair acts as a key and 10 is the value associated with it -> {{2,3}, 10}

auto it = mpp.lower_bound(2);
auto it = mpp.upper_bound(3);

// erase, swap, size, empty are same as above 

}

void explainMultimap() { 

  // everythong is simiolar as maps but it can store multiple keys
  // only mpp[key] can't be used here  

}

void explainUnorderedmap() { 
  // same as set and unordered_set difference 
  // unique keys, randomized order
  // map works in logarithmic time, unordered map works in constant time 
  // it goes to O(n)in worst case 

}

void explainExtra() { 
  // suppose an array is given -> {1, 5, 3, 2, 4}
   int arr[5] = {1, 5, 3, 2, 4}; 

  // to sort this array

  sort(arr, arr+5);
  // it.begin(), it.end() concept used 

  sort(arr, arr+5, greater<int>); // to sort in descending order  

  // if using a vector 
  // sort(v.begin, v.end)

  // arr  = {1, 3, 5, 2}
  // sort(arr+2, arr+4) -> sorts only 5, 2 -> {1, 3, 2, 5}

  pair<int, int> p1[] = {{1, 2}, {2, 1}, {4, 1}}; 

  /*sort it according to second element, if second element is same then sort it according to descending order
  
  required o/p : {{4, 1}, {2, 1}, {1, 2}}
  
  */
  
  sort(p1, p1+3, comp); // comparator that is self written and it's a boolean function


   
}