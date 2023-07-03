// to define 2-d vectors

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec4; 

  vector<int> vec4_1;
  vec4_1.push_back(2);
  vec4_1.push_back(4);

  vector<int> vec4_2;
  vec4_2.push_back(6);
  vec4_2.push_back(8);

  vector<int> vec4_3;
  vec4_3.push_back(10);
  vec4_3.push_back(11);
  vec4_3.push_back(12);

  vec4.push_back(vec4_1);  // stored at 0th index
  vec4.push_back(vec4_2);  // stored at 1st index
  vec4.push_back(vec4_3);  // stored at 2nd index

  cout<<vec4.size()<<endl;

  for (auto it1: vec4){
    for (auto it2: it1){
      cout<<it2<<" ";
    } 
    cout<<endl;
  }

/*
      for (int i = 0; i < vec4.size(); i++)
    {
        for (int j = 0; j < vec4[i].size(); j++)
        {
            cout << vec4[i][j] << " ";
        }   
        cout << endl;
    }
 */


// define 10 x 20

vector<vector<int>> vec5(10, vector<int> (20, 0));

// to increase the size of this above mentioned array

vec5.push_back(vector<int>(20, 0));   // 11 x 20

// array of size 4
 vector<int>arr[4];  // all 4 elements are of datatype vector
arr[0].push_back(2);
arr[0].push_back(4);

for (auto it1: arr){
    for (auto arr: it1){
      cout<<arr<<" ";
    } 
    cout<<endl;
  }


// defining a 3-d vector: 10 x 20 x 30 --> int arr1[10][20][30]
    
    vector<vector<vector<int>>> vec3_d(10,vector<vector<int>>(20, vector<int> (30, 0)));
    cout<<vec3_d.size();

    return 0;
}
