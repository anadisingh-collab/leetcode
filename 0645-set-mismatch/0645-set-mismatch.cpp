class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<int> count ( n+1 , 0) ;
    int miss ; 
    int dupe ; 

    for (int num : nums ){
        count[num] ++ ;
    }
    for (int i = 0 ; i <= n ; i++){

        if (count[i]==2){
            dupe = i ; 
        }
        else if (count[i]==0){
            miss=i ;
        }
    }
    return {dupe , miss} ;
    }
};