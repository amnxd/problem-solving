class Solution {
   public:
      // Function to check if b is a subset of a
      bool isSubset(vector<int> &a, vector<int> &b) {
         
         int j=0;
         sort(a.begin(), a.end());
         sort(b.begin(), b.end());
         
         for(int i=0; i<a.size(); i++){
               if(j>=b.size()) break;
               else if(a[i]==b[j]){
                  j++;
               }
         }
         
         if(j==b.size()) return true;
         else return false;
      }
};