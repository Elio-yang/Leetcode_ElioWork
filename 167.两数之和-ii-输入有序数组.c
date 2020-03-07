/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i=0,j=numbersSize-1;//双指针
    *returnSize=2;
    int* ans=(int*)malloc(sizeof(int)*2);
    while(i<j){
        if(numbers[i]+numbers[j]==target){
            ans[0]=i+1;
            ans[1]=j+1;
            return ans;
        }
        else if(numbers[i]+numbers[j]<target){
            i++;
        }
        else if(numbers[i]+numbers[j]>target){
            j--;
        }
    }
    return 0;
}


// @lc code=end

