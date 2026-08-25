class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set <int>mp; 

        for (int num : nums){
            mp.insert(num) ; 
        }
       int ans = k ; 
     
    while ( mp.find(ans)!=mp.end()){
        ans += k ; 
    }
    return ans ; 
    
    }
};