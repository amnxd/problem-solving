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

}