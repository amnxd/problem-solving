// Sorting an Array in 0's and 1's
// Two pass method noz, noo;
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

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
  int noz =0, noo=0;
  for(int i=0; i<v.size(); i++){
    if(v[i]==0) noz++;
    else if(v[i]==1) noo++;
    else cout<<-1;
  }
  for(int i=0; i<v.size(); i++){
    if(i<noz) v[i] = 0;
    else v[i] = 1;
  }

  // print(v);
  cout<<"Sorted Array: ";
  // for(int i=0; i<v.size(); i++){
  //   cout<<v[i]<<" ";
  // }
  print(v);
}