class Solution {
public:
    static bool compare(const pair<char,int>&p1, const pair<char,int>&p2){
        return p1.second<p2.second;
    }
    string customSortString(string order, string s) {
        int rank[26]={-1};
        for(int i=0;i<order.length();i++){
            rank[order[i]-'a']=i;
        }
        vector<pair<char,int>>data;
        for(int i=0;i<s.length();i++){
            data.push_back({s[i],rank[s[i]-'a']});
        }
        sort(data.begin(),data.end(),compare);
        string ans;
        for(int i =0;i<s.size();i++){
            ans+=data[i].first;
        }
        
        return ans;
    }
};