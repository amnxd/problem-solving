#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int x = 0;
    string s;
    
    while(n>0){
      cin >> s;
        if( s=="X++" || s=="++X" ){
            x++;
        }
        else{
            x--;
        }
        n--;
    }  
    cout<<x;
}