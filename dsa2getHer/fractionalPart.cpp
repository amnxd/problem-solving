#include<iostream>
using namespace std;

int main(){
    float f;
    cin>>f;

    int f2 = (int)f;
    if(f2<0) f2 = f2-1;
    float f3 = f - f2;

    cout<<f3;
}