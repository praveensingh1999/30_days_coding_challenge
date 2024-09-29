class Solution {
public:
    vector<vector<string>>ans;
    bool check_palindrome(string str){
        int first =0;
        int last = str.length()-1;
        while(first<=last){
            if(str[first]!=str[last]){
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
    void generate_palin(string s,vector<string>temp,string &st){
        if(s.length()==0){
            ans.push_back(temp);
        }
       for (int i = 0; i < s.length(); i++) {
            st = s.substr(0, i + 1);  // Get the current prefix of `s`
            if (check_palindrome(st)) {  // Check if the current prefix is a palindrome
                temp.push_back(st);  // Add the palindrome to the current partition
                
                // Recur with the remaining substring
                generate_palin(s.substr(i + 1), temp, st);
                
                // Backtrack by removing the last added palindrome
                temp.pop_back();
            }
    
       }
    }
  
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        string st="";
        generate_palin(s,temp,st);
        return ans;
        
    }
};