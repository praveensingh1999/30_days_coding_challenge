class Solution {
public:
    
    void countpossibilities(int freq[],string tiles,int& total_count){
        for(int i=0;i<26;i++){
            // char val=tiles[i];
            // int val2=int(val);
            if(freq[i]>0){
                total_count++;
                freq[i]--;
                countpossibilities(freq,tiles,total_count);
                freq[i]++;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        int total_count=0;
        int freq[26]={0};
        for(int i=0;i<tiles.length();i++){
            freq[tiles[i]-'A']++;
        }
       
          countpossibilities(freq,tiles,total_count);
        return total_count;
        
    }
};