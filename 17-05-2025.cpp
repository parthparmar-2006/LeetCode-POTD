class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0, o=0, n=nums.size();
        for (int i: nums) {
            z += (i==0);
            o += (i==1);
        } 
        for (int i=0; i<n; i++) {
            if (i<z) nums[i] = 0;
            else if (i<(z+o)) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};
