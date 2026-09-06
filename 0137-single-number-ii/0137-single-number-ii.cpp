class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> ans;
        
        for(auto x: nums){
            ans[x]++;
        }

        for(auto x: ans){
            if(x.second == 1){
                return x.first;
            }
        }
        
        return -1;
    }
};