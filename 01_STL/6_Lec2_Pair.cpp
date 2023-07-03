#include<bits/stdc++.h>
using namespace std;

int main(){

 // pair class -->not a container
 pair<int, int> pr = {1,2};
 cout<<pr.first<<" "<<pr.second<<endl;

pair<pair<int, int>, int> pr1 = {{1,2},1};
cout<<pr1.first.second<<endl;
 
pair<pair<int, int>, pair<int, int>> pr2 = {{1,2},{3,4}};
cout<<pr2.first.first<<endl;
cout<<pr2.first.second<<endl;
cout<<pr2.second.first<<endl;
cout<<pr2.second.second<<endl;

// All these are possible

// vector<pair<int, int>> vec; 
// set<pair<int, int>> st; 
// map<pair<int, int>, int> mpp; 
// unordered_map<pair<int, int>, int> mpp; --> this is not possible 


















return 0;

}