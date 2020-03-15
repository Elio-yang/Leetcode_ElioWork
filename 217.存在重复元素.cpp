/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            nums2.insert(nums[i]);
        }
        return nums2.size()!=nums.size();
    }
};


// @lc code=end

