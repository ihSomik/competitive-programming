class Solution {
    public:
        int climbStairs(int n) {
            if (n == 1) return 1;
            else if (n == 2) return 2;

            //dp[i] := the number of ways to climb to the i-th stair
            vector < int > dp(n + 1);
            dp[1] = 1;
            dp[2] = 2;

            for (int i = 3; i <= n; i++)
                dp[i] = dp[i - 1] + dp[i - 2];

            return dp.back();
        }
};
