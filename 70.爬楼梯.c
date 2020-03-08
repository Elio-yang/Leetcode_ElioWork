/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start


int climbStairs(int n){
    if(n<2){
        return 1;
    }
    else{
        int* dp=(int*)malloc(sizeof(int)*(n));
        dp[1]=2;
        dp[0]=1;
        for(int i=2;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2];//dp算法
        }
        return dp[n-1];
    }
    return 0;

}

//int climbStairs(int n){
//     int fir,sec,thi;
//     fir=1;
//     sec=1;
//     if(n<2){
//         return 1;
//     }
//     else{
//         for(int i=2;i<=n;i++){
//             thi=fir+sec;
//             fir=sec;
//             sec=thi;
//         }
//         return thi;
//     }
// }


// @lc code=end

