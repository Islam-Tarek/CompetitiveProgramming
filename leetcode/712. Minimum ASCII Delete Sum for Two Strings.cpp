class Solution {
public:

    int solve(string& s1, string& s2, int i, int j, vector<vector<int>>&dp){
        if((i == s1.size()) && (j == s2.size()))
            return 0;
        if(i == s1.size())
            return solve(s1, s2, i, j+1, dp) + (s2[j]);
        if(j == s2.size())
            return solve(s1, s2, i+1, j, dp) + (s1[i]);


        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s1[i] == s2[j]){
            return dp[i][j] = solve(s1, s2, i+1, j+1, dp);
        }
        

        return dp[i][j] = min(
             solve(s1, s2, i, j+1, dp) + (s2[j]),
             solve(s1, s2, i+1, j, dp) + (s1[i])
            );
    
    }


    int minimumDeleteSum(string s1, string s2) {
       const int n = s1.size();
       const int m = s2.size();
       vector<vector<int>>dp(n, vector(m, -1));

        return solve(s1, s2, 0, 0, dp);
    }
};