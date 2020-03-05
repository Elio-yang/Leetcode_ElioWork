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
    *returnColumnSizes=(int*)malloc(sizeof(int*)*numRows);//每一个一维数组中有多少个元素
    int** ans_num=(int**)malloc(sizeof(int*)*numRows);//存放杨辉三角的二维数组

    int i,j;
    for(i=0;i<numRows;i++){
            (*returnColumnSizes)[i]=i+1;//每一个数组的元素个数时i+1
            ans_num[i]=(int*)malloc(sizeof(int)*(i+1));//每行i+1个数字
            ans_num[i][0]=1;
            ans_num[i][i]=1;
        for(j=1;j<i;j++){
            ans_num[i][j]=ans_num[i-1][j-1]+ans_num[i-1][j];
        }
    }
    return ans_num;
}


// @lc code=end

