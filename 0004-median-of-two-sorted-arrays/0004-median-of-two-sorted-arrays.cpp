class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> merged;

        int i = 0;
        int j = 0;

        // Merg
        while(i < nums1.size() && j < nums2.size()){

            if(nums1[i] < nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }

        // Remaining elements of nums1
        while(i < nums1.size()){
            merged.push_back(nums1[i]);
            i++;
        }

        // Remaining elements of nums2
        while(j < nums2.size()){
            merged.push_back(nums2[j]);
            j++;
        }

        int n = merged.size();

        // Odd length
    if(n % 2 == 1){
    return merged[n/2];
        }

        // Even length
    return (merged[n/2] + merged[n/2 - 1]) / 2.0;
    }
};