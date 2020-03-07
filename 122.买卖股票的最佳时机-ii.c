/*
 * @lc app=leetcode.cn id=122 lang=c
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int i=0;
    int j;
    int max=0;
    for(j=1;j<pricesSize;j++){
        if(prices[j]-prices[i]>=0){
            max+=prices[j]-prices[i];
            i++;
        }
        else{
            i++;
        }
    }
    return max;
}


// @lc code=end

