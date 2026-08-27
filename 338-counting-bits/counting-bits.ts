function solve(n:number,dp: number[]): number {
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=solve(n>>1,dp)+(n&1);
    return dp[n];
}
function countBits(n: number): number[] {
    const dp = new Array(n+1).fill(-1);
    const ans = new Array(n + 1).fill(0);
    dp[0]=0;
    for(let i=0;i<=n;i++){
        ans[i]=solve(i,dp);
    }
    return ans;
    

};

