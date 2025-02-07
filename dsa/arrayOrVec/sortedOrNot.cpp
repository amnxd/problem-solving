// Check if the given array is sorted or not
#include<bits/stdc++.h>
using namespace std;

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

  if(v==sort(v.begin(),v.end())) cout<<"TRUE";

}