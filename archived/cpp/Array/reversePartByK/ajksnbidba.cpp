#include<bits/stdc++.h>
using namespace std;

int main(){
  int size, value, oddSum=0, evenSum=0;
  vector<int> v;
  cout<<"Enter size of arr: ";
  cin>>size;

  cout<<"Enter values: ";
  for(int i=0; i<size; i++){
    cin>>value;
    v.push_back(value);
  }

  for(int i=0; i<size; i+=2){
    oddSum+=v[i];
  }
  for(int i=1; i<size; i+=2){
    evenSum+=v[i];
  }
  cout<<"Diff is: "<<evenSum-oddSum;
}