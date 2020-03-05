/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    if(nums==NULL||numsSize==0){
        return 0;
    }//注意判空
    int j;
    int i;
    i=j=0;//双指针法
    for(j=0;j<numsSize;j++){
        if(nums[i]!=nums[j]){
            i++;//移动慢指针
            nums[i]=nums[j];
        } 
    }
    return i+1;
}


// @lc code=end

