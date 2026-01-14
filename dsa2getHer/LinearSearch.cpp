#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,k;
   cout<<"Enter the size of Array: ";
   cin>>n;

   cout<<"Enter the values: ";
   int arr[n];
   for(int i=0; i<=n-1; i++){
      cin>>arr[i];
   }

   cout<<"Enter the value you want to search: ";
   cin>>k;

   bool flag = false;
   for(int i=0; i<=n-1; i++){
      if(arr[i]==k){
         flag = true;
      }
   }

   cout<<flag;
}