/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result_num;
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                result_num=(int*)malloc(2*sizeof(int));
                *returnSize=2;
                result_num[0]=i;
                result_num[1]=j;
                return result_num;
            }
        }
    }
    return 0;
}


// @lc code=end

