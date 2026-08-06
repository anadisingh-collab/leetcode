class Solution {
public:
    int prodofd (int x){
    int m = 1; 
    int d ; 
        
         while (x>0){
      d = x%10 ; 
      m  = m* d ; 
      x=x/10 ; 
         }
         return m ; 
    }

    int smallestNumber(int n, int t) {

    
    while (true ){


    int a =  prodofd (n) ;
        if (a%t == 0){
            return n ; 
        }
        n++; 
    }
  
    }
};