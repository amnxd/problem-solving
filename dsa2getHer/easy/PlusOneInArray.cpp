class Solution {
public:
      vector<int> plusOne(vector<int>& digits) {
         if(digits[digits.size()-1]!=9){
               digits[digits.size()-1]+=1;
         }
         else if( digits[digits.size()-1] == 9 ){
               digits[0]+=1;
               digits[digits.size()-1]=0;
         }
         return digits;
      }
};