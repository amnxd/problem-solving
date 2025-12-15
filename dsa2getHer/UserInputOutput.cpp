#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int multiplication(int A, int B) {
        int product = A*B;
        return product;
    }
};


int main(){
    int A, B;
    cout<<"Enter two integers: ";
    if (!(cin >> A >> B)) return 0;
    Solution sol;
    int result = sol.multiplication(A, B);
    cout << result << '\n';
    return 0;
}
