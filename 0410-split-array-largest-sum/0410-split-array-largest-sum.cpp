class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            // Number of subarrays needed if maximum sum = mid
            int div = 1;
            long long sum = 0;

            for (int x : nums) {
                if (sum + x <= mid) {
                    sum += x;
                } 
                else {
                    div++;
                    sum = x;
                }
            }

            if (div > k) {
                
                low = mid + 1;
            } 
            else {
                
                high = mid - 1;
            }
        }

        return (int)low;
    }
};