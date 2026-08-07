class Solution {
public:
      int subarraySum(vector<int>& nums, int k){
      unordered_map<int,int> count ; 

    count[0]=1 ;
    int sum = 0 ;   
    int ans = 0 ; 

    for (int num : nums){
      sum = sum + num ; 

      if (count.find(sum -k)!= count.end()){
        ans = ans + count[sum-k];
      }
      count[sum]++;
    }
    return ans ; 
    }
};