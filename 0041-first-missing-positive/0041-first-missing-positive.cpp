class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int f = *max_element(nums.begin() , nums.end());
        int l = *min_element(nums.begin() , nums.end());

        unordered_set<int> freq(nums.begin(), nums.end());

        int i = 1;

        while (freq.find(i) != freq.end()) {
       i++;
    }

return i;

    }
};