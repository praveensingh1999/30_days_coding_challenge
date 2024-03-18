#include<bits/stdc++.h>
class Solution {
public:
    int trap(vector<int>& height) {
        int pmax[height.size()];
        pmax[0]=height[0];
        for(int i=1;i<height.size();i++)
        {
            pmax[i]=max(pmax[i-1],height[i]);
            
        }
        int smax[height.size()];
        smax[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            smax[i]=max(smax[i+1],height[i]);
        }
        int ans=0;
        for(int i=1;i<height.size()-1;i++){
            int level = min(pmax[i-1],smax[i+1]);
            int result = level-height[i];
            if(result>0){
                ans+=result;
            }
        }
        return ans;
        
        
    }
};