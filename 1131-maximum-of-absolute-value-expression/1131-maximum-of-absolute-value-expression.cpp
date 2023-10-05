class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,max4=INT_MIN;
        int min1=INT_MAX,min2=INT_MAX,min3=INT_MAX,min4=INT_MAX;
        for(int i=0;i<arr1.size();i++)
        {
            int v1=arr1[i]+arr2[i]+i;
            if(v1>max1)
            {
                max1=v1;
            }
            if(v1<min1)
            {
                min1=v1;
            }
            int v2=arr1[i]+arr2[i]-i;
             if(v2>max2)
            {
                max2=v2;
            }
            if(v2<min2)
            {
                min2=v2;
            }
            int v3=arr1[i]-arr2[i]+i;
             if(v3>max3)
            {
                max3=v3;
            }
            if(v3<min3)
            {
                min3=v3;
            }
            int v4=arr1[i]-arr2[i]-i;
             if(v4>max4)
            {
                max4=v4;
            }
            if(v4<min4)
            {
                min4=v4;
            }
        }
        int c1=max1-min1;
        int c2=max2-min2;
        int c3=max3-min3;
        int c4=max4-min4;
        return max(c1,max(c2,max(c3,c4)));
        
        
    }
};