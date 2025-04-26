//WAP to find the largest three elements in the array.
#include<bits/stdc++.h>
using namespace std;

int main(){
  int size, value, lar1=INT_MIN, lar2=INT_MIN, lar3=INT_MIN;
  vector<int> v;
  cout<<"Enter size of arr: ";
  cin>>size;

  cout<<"Enter values: ";
  for(int i=0; i<size; i++){
    cin>>value;
    v.push_back(value);
  }
  for(int i=0; i<size; i++){
    if(lar1<v[i]){
      lar3=lar2;
      lar2=lar1;
      lar1=v[i];
    }
    // else if(lar2<v[i]){
    //   lar3=lar2;
    //   lar2=v[i];
    // }
    // else{
    //   lar3=v[i];
    // }
  }
  cout<<"The largest three elements in the Arr are: "<<lar1<<" "<<lar2<<" "<<lar3;
}