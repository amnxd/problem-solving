#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"Enter the size of Array: ";
   cin>>n;
   
   int arr[n];
   //input
   for(int i=0; i<n; i++){
      cin>arr[i];
   }

   // int max = arr[0];
   int max = INT_MIN;
   for(int i=0; i<n; i++){
      if(max<arr[i]) max = arr[i];
   }

   int smax = INT_MIN;
   for(int i=0; i<n; i++){
      if(smax!=arr[i] && smax<arr[i]) smax = arr[i];
   }

   // cout<<max<<endl;
   cout<<smax<<endl;



}