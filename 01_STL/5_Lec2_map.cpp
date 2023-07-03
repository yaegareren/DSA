#include<bits/stdc++.h>
using namespace std;

int main(){

// key value concept 
    // raj ->27
    // mohit ->38
    // ayush ->49
    // piyush ->83
    // shree ->54

    // time complexity of nearly every operation is log(n)
    
    map<string, int> mpp;
    mpp["raj"]=27; 
    mpp["mohit"]=38;  // mpp.emplace("mohit", 38);
    mpp["ayush"]=39;
    mpp["piyush"]=83;
    mpp["praveer"]=83;
    mpp["shree"]=54;
    mpp["raj"]=29;  // map will store this. 27 will be overwritten

    // sorted always according to the keys
    // map only stores unique keys

    mpp.erase("raj"); // mpp.erase(key)
    mpp.erase(mpp.begin()); // mpp.erase(iterator) 
    mpp.clear(); // entire map is cleared
    // mpp.erase(mpp.begin(), mpp.begin() +2);

    auto it = mpp.find("raj"); //points to where raj lies
    auto it = mpp.find("aryan"); //points to end since it does not exist

    // to check if map is empty
    if(mpp.empty()){
      cout<<"Yes, it's empty";
    }

    mpp.count("shree"); //always returns 1 because map only stores 1 instance of shree

    // printing map

    for (auto it :mpp){
      cout<<it.first<<" "<<it.second<<endl;
    }

    /*
    for (auto it = mpp.begin(); it!=mpp.end(); it++){
      cout<<it->first<<" "<<it->second<<endl;
    }
    */

   unordered_map<int, int> mpp1;
   // does not store in any order
   // o(1) in almost all cases
   // o(n) in the worst case, where n is the container size


  multimap<string, int> mpp1;
  mpp1.emplace("shree",1);
  mpp1.emplace("shree",2);
  

  return 0;

}
