/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

int searchInsert(int *nums, int numsSize, int target)
{
    int i;
    for(i=0;i<numsSize;i++){
        if(target<=nums[i]){//等号提供了相等
            return i;
        }
    }
    return numsSize;//最右边
}
//注意在最左边和最右边的情况
//也可以二分法，return left
// @lc code=end
