/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int i,j;
    int ans_max=0;
    for(i=pricesSize-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            if((prices[i]-prices[j])>=ans_max){
                ans_max=prices[i]-prices[j];
            }
        }
    }
    return ans_max;
}

/*class Solution {
    public int maxProfit(int[] prices) {
        if(prices.length<=1){
            return 0;
        }
        int min=prices[0],max=0;
        for(int i=0;i<prices.length;i++){
            max=Math.max(max,prices[i]-min);
            min=Math.min(min,prices[i]);
        }
        return max;
    }
}*/

/*
int maxProfit(int* prices, int pricesSize){
    if(pricesSize<=1){
        return 0;
    }
    int min=prices[0],max=0;
    for(int i=0;i<pricesSize;i++){
        max=max>prices[i]-min?max:prices[i]-min;
        min=min<prices[i]?min:prices[i];
    }
    return max;
}
*/

// @lc code=end

