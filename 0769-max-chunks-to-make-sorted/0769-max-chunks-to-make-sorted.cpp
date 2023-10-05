class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       vector<int>prefix_max;
        prefix_max.push_back(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            prefix_max.push_back(max(prefix_max[i-1],arr[i]));
            
        }
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i==prefix_max[i])
            {
                count++;
            }
        }
        return count;
        
    }
};