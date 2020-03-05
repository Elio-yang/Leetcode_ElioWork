/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int i=0;
    int j;//双指针
    for(j=0;j<numsSize;j++){
        if(nums[j]!=val){
            nums[i]=nums[j];
            i++;
        }
    }
    return i;
}


// @lc code=end

