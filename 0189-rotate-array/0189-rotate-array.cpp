class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int n = nums.size();
        
        reverse(nums.begin(), nums.begin() + n - k);  // Reverse the first part of the array
        reverse(nums.begin() + n - k, nums.end());    // Reverse the second part of the array
        reverse(nums.begin(), nums.end());
        
    }
};