//agr n/2 times element aarha hai to count krne pr every 2nd element should be the ans element too we count -- whenever iterator element id diff if it gets 0 then we switch 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = 0;
        int count = 0;

        for (int num : nums) {

            if (count == 0)
                x = num;

            if (num == x)
                count++;
            else
                count--;
        }

        return x;
    }
};
           