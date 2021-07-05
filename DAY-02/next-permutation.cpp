class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for (int i = 0; i < n-1; i++) {
            if (nums[i+1] > nums[i]) {
                ind = i;
            }
        }
        if (ind != -1) {
            int ind2 = ind;
            for (int i = ind+1; i < n; i++) {
                if (nums[i] > nums[ind] and (ind2 == ind or nums[ind2] >= nums[i])) {
                    ind2 = i;
                }
            }
            swap(nums[ind], nums[ind2]);
        }
        reverse(nums.begin()+ind+1, nums.end());
    }
};
