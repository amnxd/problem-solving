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
  int no0=0, no1=0, no2=0;
  for(int i=0; i<size; i++){
    if(v[i]==0) no0++;
    else if(v[i]==1) no1++;
    else if(v[i]==2) no2++;
  }
  // cout<<no0<<" "<<no1<<" "<<no2<<endl;
  cout<<"Sorted array: ";
  for(int i=0; i<size; i++){
    if(i<no0) v[i] = 0;
    else if(i<no1+no0) v[i] = 1;
    else v[i]=2;
  }
  print(v);
}