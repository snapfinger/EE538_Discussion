#include "libs.h"

// Sol 2: DP with space compression
// TC: O(n)
// SC: O(1)
int climbStairs2(int n) {
    if(n == 1) return n;
    int prev2 = 1, prev1 = 1, cur;
    for(int i=2; i<= n; i++){
        cur = prev2 + prev1;
        prev2 = prev1; 
        prev1 = cur;
    }
    return cur;
}

// Sol 1: DP
// TC: O(n)
// SC: O(n)
int climbStairs1(int n) {
    vector<int> dp(n+1, a1);
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    cout << climbStairs(3) << endl;
    //  vector<int> dp(3, 1);
}