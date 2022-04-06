class Solution {
public:
    int climbStairs(int n) {
        if (n<=0) return 0;
        if (n<=2) return n;
        
        int a=2, b=1;
        int totalWays = 0;
        for(int i=2; i<n; i++){
            totalWays = a+b;
            b = a;
            a = totalWays;
        }
        return totalWays;
        
    }
};