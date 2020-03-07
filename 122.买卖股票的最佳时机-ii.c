/*
 * @lc app=leetcode.cn id=122 lang=c
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start

int maxProfit(int* prices, int pricesSize){
   int i;
   int** dp=(int**)malloc(sizeof(int*)*pricesSize);
   if(pricesSize<=1){
       return 0;
   }
   for(i=1;i<pricesSize;i++){
       dp[0]=(int*)malloc(sizeof(int)*2);
       dp[i]=(int*)malloc(sizeof(int)*2);
       dp[0][0]=0;
       dp[0][1]=-prices[0];
       dp[i][0]=Max(dp[i-1][0],dp[i-1][1]+prices[i]);
       dp[i][1]=Max(dp[i-1][1],dp[i-1][0]-prices[i]);
   }
   return dp[pricesSize-1][0];

}
int Max(int a,int b){
    return a>b?a:b;
}
// int maxProfit(int* prices, int pricesSize){
//     int i=0;
//     int j;
//     int max=0;
//     for(j=1;j<pricesSize;j++){
//         if(prices[j]-prices[i]>=0){
//             max+=prices[j]-prices[i];
//             i++;
//         }
//         else{
//             i++;
//         }
//     }
//     return max;
// }


// @lc code=end

