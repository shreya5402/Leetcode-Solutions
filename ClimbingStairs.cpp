//fibonacci series
//way 1
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int x=1, y=2;
        for(int i =3; i<n; i++){
        int temp = y;
        y += x;
        x = temp;   
        }
        return (x+y);
}
};

// way 2 
//we can also do it using dynamic programming approach we store the values that are already known to us and it makes the code more easy and fast.
// here we are adding n-1 and n-2 values and this will give us the moves required for reaching final n steps

class Solution {
public:
    int climbStairs(int n){
        int dp[n+1];
        if(n<=2){
            return n;
        }
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i =3; i<=n; i++){
            dp[i]= dp[i-2] + dp[i-1]; 
        }
        return dp[n];
    }
};
