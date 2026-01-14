#include<iostream>
#include<climits>
using namespace std;

// class Solution {
// public:
    int reverse(int x) {
        int y=0; //long
        while(x!=0){
            if(y>INT_MAX/10 || y<INT_MIN/10) return 0;
            int z = x%10;
            x/=10;
            y = (y*10)+z;
            // if(y>INT_MAX || y<INT_MIN) return 0;
        }
        return y;
    }
    int main(){
        int x;
        cin>>x;
        cout<<reverse(x);
    }
// };

