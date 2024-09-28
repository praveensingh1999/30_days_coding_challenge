class Solution {
public:
    vector<vector<int>> ans;

    void printpermutation(vector<int>& nums, int i) {
        if (i == nums.size() - 1) {
            ans.push_back(nums);
            return;
        }
        int freq[21] = {0}; // Array size 21 to handle nums from -10 to 10
        for (int j = i; j < nums.size(); j++) {
            // We map nums[j] from [-10, 10] to [0, 20] using index shift
            if (freq[nums[j] + 10] == 0) { // +10 to shift negative numbers to valid indices
                swap(nums[i], nums[j]);
                printpermutation(nums, i + 1);
                swap(nums[i], nums[j]);
                freq[nums[j] + 10]++; // Mark this number as used at this position
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        printpermutation(nums, 0);
        return ans;
    }
};
