class Solution {
public:
    int maxProduct(int n) {
        int dig ; 
        vector<int> digits ;

        while (n!=0){
          dig = n %10 ; 
         digits.push_back(dig) ; 

         n = n /10 ; 
        }
        sort (digits.begin() , digits.end() , greater<int>());

        int ans = digits[0] * digits[1] ;
        return ans ; 
    }
};