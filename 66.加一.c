/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
  for(int i=digitsSize-1;i>=0;i--){
        digits[i]++;
        digits[i]=digits[i]%10;
        if(digits[i]!=0){
            *returnSize=digitsSize;
            return digits;
        }
    }
    int* ans_num=(int*)malloc(sizeof(int)*(digitsSize+1));
    ans_num[0]=1;
    for(int i=1;i<digitsSize+1;i++){
       ans_num[i]=0;
    }
    *returnSize=digitsSize+1;
    return ans_num;
}

// @lc code=end

