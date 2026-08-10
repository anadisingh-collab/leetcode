class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

       vector<int> pos ; 
       vector<int> neg  ;

       for(int i =0 ; i<nums.size() ; i++){
        if (nums[i]>0){
            pos.push_back(nums[i]);
        }
        else 
        neg.push_back(nums[i]);
       } 
    vector<int> ans(nums.size()); 
    
    for (int i = 0 ; i<nums.size()/2 ; i ++) {
        ans[i*2]= pos[i];
        ans[(i*2)+1] = neg[i];
    }
    return ans ;
    }
};