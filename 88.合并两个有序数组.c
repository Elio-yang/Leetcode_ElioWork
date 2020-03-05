/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
   int i=0,j=0;
   for(i=m;i<m+n;i++){//从nums1的结尾开始拼接
       if(nums2[j]!=0){//不要0元素
           nums1[i]=nums2[j];
           j++;
       }
       else{
           j++;
       }
   }
   for(i=0;i<m+n-1;i++){//共m+n-1轮
       bool flag=0;
       for(j=0;j<m+n-1-i;j++){//每进行一次就-i
           if(nums1[j+1]<nums1[j]){
               int temp=nums1[j];
               nums1[j]=nums1[j+1];
               nums1[j+1]=temp;
               flag=1;//冒泡排序法
           }
       }
       if(flag==0){
           break;
       }
   }
}


// @lc code=end

