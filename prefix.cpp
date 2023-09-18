class NumArray {
public:

    vector<int>prefix_sum;
    NumArray(vector<int>& nums) {


        int sum=nums[0];
        prefix_sum.push_back(sum);
        for(int i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            prefix_sum.push_back(sum);
        }
        
    }
    
    
    int sumRange(int left, int right) {
        if(left==0 && right==0)
        {
            return prefix_sum[0];
        }
        else if(left==0)
        {
            return prefix_sum[right];

        }
        else 
        {
            return prefix_sum[right]-prefix_sum[left-1];
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
