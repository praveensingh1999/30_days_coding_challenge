class Solution {
public:
    vector<string>ans;
    
    void generate_string(string digits,vector<vector<char>>character_map,int i,string temp){
       if(digits[i]=='\0'){
           ans.push_back(temp);
           return;
       }
        for(int j=0;j<character_map[digits[i]-'2'].size();j++){
            generate_string(digits,character_map,i+1 ,temp+character_map[digits[i]-'2'][j]);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<vector<char>>character_map={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
        
        if(digits.length()==0){
            return ans;
        }
        int i=0;
        string temp;
        generate_string(digits,character_map,i,temp);
        return ans;
        
        
    }
};