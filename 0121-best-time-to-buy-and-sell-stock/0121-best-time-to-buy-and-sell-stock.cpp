class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = prices[0];
        int ans = 0  ;

        for (int i = 1 ; i< prices.size();i++){
            if (buy > prices[i]){
                buy = prices[i];
            }

            int pro = prices [i]-buy ;

            if (pro > ans )
            ans = pro ; 
        }

        return ans ; 
        
    }
};