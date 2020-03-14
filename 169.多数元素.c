/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 多数元素
 */

// @lc code=start


int majorityElement(int* nums, int numsSize){
    int major=nums[0];
    int count=1;
    int i;
    for(i=1;i<numsSize;i++){
        if(nums[i]!=major){
            --count;
            if(count<0){
                count=0;
                major=nums[i];//减到0.换一个数计数
            }
        }
        else if(nums[i]==major){
            ++count;
            major=nums[i];
        }
    }
    return major;
}
//摩尔投票法：从第一个数开始count=1，遇到相同的就加1，
//遇到不同的就减1，减到0就重新换个数开始计数，总能找到最多的那个
//O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> cnt;
        for(int i=0;i<nums.size();i++){
            if(!cnt.count(nums[i])){
                cnt[nums[i]]=0;
            }
            ++cnt[nums[i]];
        }
        for(int i=0;i<nums.size();i++){
            if(cnt[nums[i]]>nums.size()/2){
                return nums[i];
            }
        }
        return 0;
    }
};//利用map，存储每个元素出现的次数


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};//必然存在，所以排序后一定在中位数的位置





// @lc code=end

