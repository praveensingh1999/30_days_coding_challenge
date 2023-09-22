//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution {
public:
    // Function to find the kth power of an integer within given intervals
    int powerfullInteger(int n, vector<vector<int>> &intervals, int k) {
        // Using a map to keep track of the count of intervals
        map<int, int> mpp;
        
        // Iterating over all the intervals and updating the count in the map
        for(auto x : intervals) {
            mpp[x[0]] += 1;
            mpp[x[1] + 1] -= 1;
        }
        
        int ans = -1;
        int temp = 0;
        
        // Iterating over the map to find the kth power of an integer
        for(auto x : mpp) {
            // If the count in the map is positive
            if(mpp[x.first] >= 0) {
                temp += mpp[x.first];
                // Checking if the count is greater than or equal to k
                if(temp >= k) ans = x.first;
            }
            // If the count in the map is negative
            else {
                // Checking if the previous count was greater than or equal to k
                if(temp >= k) ans = x.first - 1;
                temp += mpp[x.first];
            }
        }
        
        // Returning the kth power of an integer
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends