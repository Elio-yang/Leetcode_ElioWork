/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss=nums.size();
        for(int i=0;i<nums.size();i++){
            miss^=nums[i]^i;
        }
        return miss;
    }
};
/*
因此我们可以先得到[0..n] 的异或值，再将结果对数组
中的每一个数进行一次异或运算。未缺失的数在 [0..n]
和数组中各出现一次，因此异或后得到 0。而缺失的数字
只在 [0..n]中出现了一次，在数组中没有出现，因此最
终的异或结果即为这个缺失的数字。

*/
// @lc code=end

