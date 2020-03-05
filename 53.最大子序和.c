/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */

// @lc code=start


int maxSubArray(int* nums, int numsSize){
    int maxSum=nums[0];//如果整体小于0,[-1]
    int thisSum;
    for(int i=0;i<numsSize;i++){
        thisSum=0;
        for(int j=i;j<numsSize;j++){
            thisSum+=nums[j];
            if(thisSum>maxSum){
                maxSum=thisSum;
            }
        }
    }

    return maxSum;
}


// @lc code=end

