class Solution {
public:
    bool checkDivisibility(int n) {
     int num = n ;   
     int sum = 0 ; 
     int product = 1; 
     int d ; 
    
     while ( n != 0){
      d = n % 10 ;     

      sum = sum + d ; 
      product = product * d ; 

      n = n / 10 ;

     }

     int f ; 
     f = sum + product ; 

     if (num % f == 0){
        return true ;
     }
     else 
     return false ; 

    }
};