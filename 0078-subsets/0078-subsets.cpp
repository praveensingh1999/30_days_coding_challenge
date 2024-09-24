class Solution {
public:
    vector<vector<int>>ans;
    
    void generate_subset(vector<int>temp,vector<int>num,int i){
        if(i==num.size()){
            ans.push_back(temp);
            return ;
        }
        generate_subset(temp,num,i+1);
        temp.push_back(num[i]);
        generate_subset(temp,num,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       
       
        vector<int>temp;
        int i=0;
        generate_subset(temp,nums,i);
        return ans;
      
        
    }
};