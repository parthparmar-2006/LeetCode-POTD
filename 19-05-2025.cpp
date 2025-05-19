class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        if (!(a+b>c) || !(a+c>b) || !(b+c>a)) return "none";
        if (nums[0]==nums[1] && nums[1]==nums[2]) {
            return "equilateral";
        } else if (nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]) {
            return "isosceles";
        } else return "scalene";
    }
};
