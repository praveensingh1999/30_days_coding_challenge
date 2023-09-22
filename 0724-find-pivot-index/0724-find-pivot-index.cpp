class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix_sum(nums.size());
        vector<int>sufix_sum(nums.size());
        prefix_sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int ans=prefix_sum[i-1];
            prefix_sum[i]=nums[i]+ans;
        }
        sufix_sum[nums.size()-1]=nums[nums.size()-1];
        for(int j=nums.size()-1;j>0;j--)
        {
            int ans2=sufix_sum[j];
            sufix_sum[j-1]=ans2+nums[j-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(prefix_sum[i]==sufix_sum[i])
            {
                return i;
            }
        }
        return -1;
        
        
    }
};