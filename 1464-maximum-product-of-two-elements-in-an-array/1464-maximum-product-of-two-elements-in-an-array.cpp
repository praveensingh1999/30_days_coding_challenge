class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num1=nums[nums.size()-1];
        int num2=nums[nums.size()-2];
        int ans=(num1-1)*(num2-1);
        return ans;
        
    }
};