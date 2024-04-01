class Solution {
public:
    
    bool check(int s1[],int s2[]){
        for(int i=0;i<26;i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }
        return true;
        
    }
    
    bool checkInclusion(string s1, string s2) {
        int window_size=s1.length();
        if(s1.length()>s2.length()){
            return false;
        }
        int s1arr[26]={0}, s2arr[26]={0};
        
        for(int i=0;i<s1.length();i++){
            s1arr[s1[i]-'a']++;
        }
        for(int i=0;i<window_size;i++){
            s2arr[s2[i]-'a']++;
        }
        for(int j=window_size;j<s2.length();j++){
            if(check(s1arr,s2arr)==true){
                return true;
            }
            s2arr[s2[j]-'a']++;
            s2arr[s2[j-window_size]-'a']--;
            if(check(s1arr,s2arr)==true){
                return true;
            }
            
        }
        if(check(s1arr,s2arr)==true){
                return true;
            }
        else{
            return false;
        }
        
    }
};