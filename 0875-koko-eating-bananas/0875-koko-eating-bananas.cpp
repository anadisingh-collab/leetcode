class Solution {
public:
    // calculate total hours needed at speed k
    long long calculateHours(vector<int>& piles, int k) {
        long long hours = 0;

        for (int pile : piles) {
            hours += (pile + k - 1) / k; 
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long hours = calculateHours(piles, mid);

            if (hours <= h) {
                ans = mid;          // possible answer
                high = mid - 1;     // smaller speed
            }
            else {
                low = mid + 1;      //higher speed
            }
        }

        return ans;
    }
};