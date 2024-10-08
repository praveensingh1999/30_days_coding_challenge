class Solution {
public:
   static bool compare(const vector<int>&p1,const vector<int>&p2){
        int d1=p1[0]*p1[0]+p1[1]*p1[1];
        int d2=p2[0]*p2[0]+p2[1]*p2[1];
        return d1<d2;
    }
        
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       
        sort(points.begin(),points.end(),compare);
      
         return vector<vector<int>>(points.begin(), points.begin() + k);
        
    }
};