#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;

      // Start at 0 to check every single digit
   for (int i = 0; i < (int)s.length(); i++) {
      int t = s[i] - '0';
         
      int inverted = 9 - t;

         // Condition 1: Is the inverted digit smaller?
      if (inverted < t) {
               // Condition 2: Don't make the first digit a '0'
            if (i == 0 && inverted == 0) {
               continue; 
            }
            s[i] = inverted + '0';
      }
   }

   cout << s << endl;
   return 0;
}