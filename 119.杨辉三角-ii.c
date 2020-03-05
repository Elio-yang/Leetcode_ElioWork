/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int *dp=(int*)malloc(sizeof(int)*(rowIndex+1));//dp算法
    int i,j;
    for(i=0;i<=rowIndex;i++){
        for(j=i;j>=0;j--){
            if(j==0||j==i){
                dp[j]=1;
            }
            else{
                dp[j]=dp[j]+dp[j-1];//路径转移方程
            }
        }
    }
    *returnSize=rowIndex+1;
    return dp;
}
//逆向覆盖，跟杨辉三角的生成一致

// @lc code=end

