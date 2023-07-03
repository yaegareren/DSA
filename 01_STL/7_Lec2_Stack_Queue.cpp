#include<bits/stdc++.h>
using namespace std;

int main()
{
  // Stack and queue
  stack<int> stk; // LIFO ds
  /* functions:
      pop
      top
      size
      empty
      push or emplace */

      stk.push(2);
      stk.push(4);
      stk.push(3);
      stk.push(1);
      
      cout<<stk.top()<<endl; // prints 1
      stk.pop(); // deletes the last entered element
      cout<<stk.top()<<endl; // prints 3
      stk.pop(); // deletes 3

      bool flag = stk.empty(); // returns true if stack is empty else false
      cout<< flag<<endl; // prints 0
      cout<<stk.size()<<endl; // --> prints the number of elements in the stack: prints 2
      bool flag1;

      // to delete the entire stack
      while(!stk.empty()){ 
        stk.pop();
        flag1 = stk.empty();  
      }
      cout<<flag1<<endl;  // prints 1
      cout<<stk.size()<<endl; // prints 0

      // important check before stack.top()

      stack<int> stk2;
      if(!stk2.empty()) {
        cout<<stk2.top()<<endl;
      }

      // QUEUE -FIFO ds
      /* push
         front
         pop
         size
         empty

         all these operations are of o(1) except empty operaion which takes o(n) time
      */

     queue<int> q;
     q.push(2);
     q.push(4);
     q.push(6);
     q.push(1);

     /*
     queue<int> q;
     int n;
     cin>>n;
     for(int i=0; i<n; i++){
      q.push(i);
     }
     */
     
     cout<<q.size()<<endl;  // prints 4
     cout<<q.front()<<endl; // prints 2
     q.pop();
     cout<<q.front()<<endl; // prints 4

     while(!q.empty()){
      q.pop();
     }

     cout<<q.size()<<endl; // prints 0

     // PRIORITY QUEUE

     /* 
     operations in set are of O(log n) complexity but they only store unique elements. In unordered set most operations are of O(1) complexity but in worst case they are of O(n) time complexity, so priority queue is used which stores all in sorted order aqnd does the operations in log(n) time. Uses the concept of heaps.
     */
    
    priority_queue<int> pq; // maximum priority queue. 
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);   // these are stored in descending order 
    // max element at the top
    // second max element at the second position and so on

    cout<<pq.top()<<endl; // prints 6
    pq.pop(); // deletes 6

    cout<<pq.top()<<endl; // prints 5

    priority_queue<pair<int, int>> pq1;
    pq1.push(make_pair(1, 5));
    pq1.push(make_pair(1, 6));
    pq1.push(make_pair(1, 7));
    
    // to print the elements of pair in priority queue
    while(!pq1.empty()) {
      cout<<pq1.top().first<<" "<<pq1.top().second<<endl;
      pq1.pop();

      // output: (1, 7) (1, 6) (1, 5) 
    }

    cout<<endl;

    // to store elements in descending order
    
    // minimum priority queue from a maximum  priority queue 
    priority_queue<int> pq3;

    pq3.push(-1);
    pq3.push(-5);
    pq3.push(-2);
    pq3.push(-6); 

    cout<<-1 * pq3.top()<<endl; // prints 1

    // syntax for minimum priority queue

    priority_queue <int, vector<int>, greater <int> > pq4;
    pq4.push(1);
    pq4.push(5);
    pq4.push(2);
    pq4.push(6);

    cout<<pq4.top()<<endl; // prints 1

    // set implements red-black tree
    // map implements avl tree

    // priority_queue <pair<int, int>, vector< pair<int, int>>, greater <pair<int, int>> >;

    //DEQUEUE

    deque<int> dq ;

    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin, end(), rbegin, rend
    //size
    //clear
    //empty
    //at

    // List implements doubly linked list but vector is more efficient hence widely used


    list <int> ls;    // generally used 
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin, end(), rbegin, rend
    //size
    //clear
    //empty
    //at
    //remove --> o(1)

    ls.push_front(1);
    ls.push_front(2);
    ls.push_front(3);

    ls.remove(2); // --> o(1)
    
  /*
  Given n number of elements, print the elements that occur the maximum number of times 
  input: 5
  1 3 3 3 2

  output: 3
  
  */

 int n;
 cin>>n;
 map<int, int> mpp;
 int x;
 int maxi=0;
 for(int i=0; i<n; i++){
  cin>>x;

  mpp[x]++;

  if(mpp[x] > mpp[maxi]){
    maxi=x;
  }
   cout<<x<<endl;
 }
 




    



    
     















  return 0;

}