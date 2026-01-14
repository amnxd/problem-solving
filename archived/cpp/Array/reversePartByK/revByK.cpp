#include<bits/stdc++.h>
using namespace std;

/*
vector<int> result(vector<int>& v,int K){
  vector<int> resV;
  vector<int> rev1(v.size()-K);
  // rev1 = v;
  for(int i=0; i<=v.size()-K; i++){
    rev1.push_back(v[v.size()-K-1]);
  }
  vector<int> rev2(K);
  // rev2 = v - rev1;
  for(int i=0; i<K; i++){
    rev2.push_back(v[v.size()-i-1]);
  }
  // resV = rev1 + rev2;
  for(int i=0; i<=v.size(); i++){
    while(i<=v.size()-K){
      resV.push_back(rev1[i]);
    }
    while(i>v.size()-K && i<K){
      resV.push_back(rev2[i]);
    }
  }
  int temp=0;
  for(int i=0; i<v.size()/2; i++){
    temp = resV[i];
    resV[i] = resV[v.size()-i-1];
    resV[v.size()-i-1] = temp;
  }
}
*/

int main(){

  vector<int> v;
  int size,value,K;
  cout<<"Enter the size: ";
  cin>>size;
  cout<<"Enter the values: ";
  for(int i=0; i<size; i++){
    cin>>value;
    v.push_back(value);
  }

  cout<<"Enter K: ";
  cin>>K;
  // result(v,K);
  
  vector<int> resV;

  vector<int> rev1(v.size()-K);
  // rev1 = v;
  for(int i=0; i<=size-K; i++){
    rev1.push_back(v[v.size()-K-1]);
  }
  vector<int> rev2(K);
  // rev2 = v - rev1;
  for(int i=0; i<K; i++){
    rev2.push_back(v[v.size()-i-1]);
  }
  // resV = rev1 + rev2;
  for(int i=0; i<=size; i++){
    while(i<=v.size()-K){
      resV.push_back(rev1[i]);
    }
    while(i>v.size()-K && i<=v.size()){
      resV.push_back(rev2[i]);
    }
  }
  int temp=0;
  cout<<"Resultant Vector: ";
  for(int i=0; i<size/2; i++){
    temp = resV[i];
    resV[i] = resV[v.size()-i-1];
    resV[v.size()-i-1] = temp;
    cout<<resV[i];
  }
  
}