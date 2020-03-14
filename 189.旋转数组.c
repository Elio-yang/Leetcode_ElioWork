/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 旋转数组
 */

// @lc code=start



void rotate(int* nums, int numsSize, int k){
    int start=0;
    int current;
    int previous;
    int temp;
    int N=0;
    int next;
    k=k%numsSize;
    for(start=0;N<numsSize;start++){
        current=start;
        previous=nums[start];
        do{
            next=(current+k)%numsSize;
            temp=nums[next];
            nums[next]=previous;
            previous=temp;
            current=next;
            N++;
        }while(start!=current);
    }
    return 0;
}




// @lc code=end

// void rotate(int* nums, int numsSize, int k){
//     int i,j;
//     for(i=0;i<k;i++){
//         int previous=nums[numsSize-1];
//         for(j=0;j<numsSize;j++){
//             int temp=nums[j];
//             nums[j]=previous;
//             previous=temp;
//         }
//     }
//     return 0;
// }
// 暴力法，一次转1次，转k次 O(K*N)
