class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prefix_min[prices.size()];
        int sufix_max[prices.size()];
        prefix_min[0]=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            prefix_min[i]=min(prices[i],prefix_min[i-1]);
        }
        
        sufix_max[prices.size()-1]=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--)
        {
            sufix_max[i]=max(sufix_max[i+1],prices[i]);
        }
        int profit=INT_MIN;
        
        for(int i=0;i<prices.size();i++)
        {
            int val=sufix_max[i]-prefix_min[i];
            if(val>profit)
                profit=val;
        }
        return profit;
        
        
    }
};