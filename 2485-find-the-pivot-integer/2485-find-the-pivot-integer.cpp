class Solution {
public:
    int pivotInteger(int n) {
        vector<int>prefix_sum(n);
        vector<int>sufix_sum(n);
        prefix_sum[0]=1;
        for(int i=1;i<n;i++)
        {
            prefix_sum[i]=i+1+prefix_sum[i-1];
        }
        sufix_sum[n-1]=n;
        for(int i=n-2;i>=0;i--)
        {
            sufix_sum[i]=i+1+sufix_sum[i+1];
        }
        for(int j=0;j<n;j++)
        {
            if(prefix_sum[j]==sufix_sum[j])
            {
                return j+1;
            }
        }
        return -1;
        
    }
    
};