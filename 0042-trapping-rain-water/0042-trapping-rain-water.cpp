class Solution {
public:
    int trap(vector<int>& height) {
        int left_max_height[height.size()];
        int right_max_height[height.size()];
        left_max_height[0]=height[0];
        for(int i=1;i<height.size();i++)
        {
            left_max_height[i]=max(height[i],left_max_height[i-1]);
        }
        for(int i=0;i<height.size();i++)
        {
            cout<<left_max_height[i];
        }
        right_max_height[height.size()-1]=height[height.size()-1];
        for(int j=height.size()-2;j>=0;j--)
        {
            right_max_height[j]=max(right_max_height[j+1],height[j]);
        }
        cout<<endl;
        for(int i=0;i<height.size();i++)
        {
            cout<<right_max_height[i];
        }
        if(height.size()<=2)
        {
            return 0;
        }
        int amot=0;
        for(int i=0;i<height.size();i++)
        {
            int t=min(left_max_height[i],right_max_height[i]);
            amot+=(t-height[i]);
        }
        return amot;
        
    }
};