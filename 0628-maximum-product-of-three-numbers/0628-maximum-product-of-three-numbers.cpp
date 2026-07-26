class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     int m1 , m2 , m3 , s1 , s2 ; 
     int n = nums.size();
     sort(nums.begin(),nums.end(),greater<int>());

    m1 = nums[0];
    m2 = nums[1];
    m3 = nums[2];
    
    s1 = nums[n-1];
    s2 = nums[n-2];
    
   int  ans1 = m1*m2*m3 ; 
   int ans2 = m1*s1*s2 ;
    return max (ans1 , ans2 ) ;
        }
};