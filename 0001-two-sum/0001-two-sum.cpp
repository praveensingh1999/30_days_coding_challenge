class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int j;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                
            }
        }
       return {-1,-1};
        
        
    }
};