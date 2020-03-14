/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */

// @lc code=start

int maxSubArray(int* nums, int numsSize){
   int ans=0;
   int* dp=(int*)malloc(sizeof(int)*numsSize);
   dp[0]=nums[0];
   ans=nums[0];
   for(int i=1;i<numsSize;i++){
       dp[i]=maxf(dp[i-1]+nums[i],nums[i]);
       ans=maxf(dp[i],ans);
   }
   return ans;
}
int maxf(int a,int b){
    return a>b?a:b;
}

// int maxSubArray(int* nums, int numsSize){
//     int maxSum=nums[0];//如果整体小于0,[-1]
//     int thisSum;
//     for(int i=0;i<numsSize;i++){
//         thisSum=0;
//         for(int j=i;j<numsSize;j++){
//             thisSum+=nums[j];
//             if(thisSum>maxSum){
//                 maxSum=thisSum;
//             }
//         }
//     }

//     return maxSum;
// }


// @lc code=end

