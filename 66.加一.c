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
        digits[i]=digits[i]%10;//如果产生了进位
        if(digits[i]!=0){//如果不等于0，说明没进位，不会再有操作，直接return
            *returnSize=digitsSize;
            return digits;
        }
    }
    //执行这下边，说明每一位都产生了进位，原数组是000的状态，这时候只需要第一位放1就可
    int* ans_num=(int*)malloc(sizeof(int)*(digitsSize+1));
    ans_num[0]=1;
    for(int i=1;i<digitsSize+1;i++){
       ans_num[i]=0;//后面全部填充0
    }
    *returnSize=digitsSize+1;
    return ans_num;
}

// @lc code=end

