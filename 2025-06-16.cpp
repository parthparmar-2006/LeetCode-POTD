class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = INT_MAX;
        int maxDiff = -1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]>minVal) maxDiff = max(maxDiff, nums[i]-minVal);
            minVal = min(nums[i], minVal);
        } return maxDiff;
    }
};
