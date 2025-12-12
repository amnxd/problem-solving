// Sorting an Array in 0's and 1's
// Two pointer method;
#include<bits/stdc++.h>
using namespace std;

// void print(vector<int>& v){
//   for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
//   }
// }

int main(){
  int size, value;
  vector<int> v;
  cout<<"Enter size of arr: ";
  cin>>size;

  cout<<"Enter values: ";
  for(int i=0; i<size; i++){
    cin>>value;
    v.push_back(value);
  }

  //code here
  int x=0, y=v.size()-1;
  int temp;
  while(x<y){
    if(v[x]==0) x++;
    else if(v[y]==1) y--;
    else{
      v[x] = 0;
      v[y] = 1;
      x++, y--;
    }
  }
  cout<<"The sorted array is: ";
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  // print(v);
}