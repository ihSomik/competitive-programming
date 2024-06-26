class Solution {
    public:
        int minCostClimbingStairs(vector < int > & cost) {
            int n = cost.size();
            //dp[i] := the minimum cost to climb to the i-th stair
            vector < int > dp(n);
            dp[0] = cost[0];
            dp[1] = cost[1];

            for (int i = 2; i < n; i++)
                dp[i] = min(dp[i - 1] + cost[i], dp[i - 2] + cost[i]);
                
            return min(dp[n - 1], dp[n - 2]);
        }
};
