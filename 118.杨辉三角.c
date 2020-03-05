/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize=numRows;//多少个一维数组
    *returnColumnSizes=(int*)malloc(sizeof(int*)*numRows);//记录每一个一维数组中有多少个元素的二维数组
    int** dp=(int**)malloc(sizeof(int*)*numRows);//存放杨辉三角的二维数组

    int i,j;
    for(i=0;i<numRows;i++){
            (*returnColumnSizes)[i]=i+1;//每一个数组的元素个数时i+1
            dp[i]=(int*)malloc(sizeof(int)*(i+1));//每行i+1个数字
            dp[i][0]=1;
            dp[i][i]=1;
        for(j=1;j<i;j++){
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];//类似 dp算法
        }
    }
    return dp;
}
//int** 是返回一个二维数组

// @lc code=end

