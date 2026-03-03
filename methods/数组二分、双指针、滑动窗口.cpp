//来源：代码随想录
//一、二分：在一个有序数组中查找某一元素的算法
/*
在一个有序数组里面（假设为升序）
每次考察中间的元素，如果这个元素正好是我们要找的，
就直接找到了；

如果这个元素比我们要找的元素大
那么我们就继续在这个元素的左边查找；


如果这个元素比我们要找的元素小
那么我们就继续在这个元素的右边查找；





*/
//例子：假设target就在 左闭右闭区间 [left, right] 中
 // whlie(l<=r)  因为l==r是有意义的
 //而若 a[mid]!=target,那么中间就一定不是target
 //从而 l=mid+1 或 r=mid-1 就不会漏掉target
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums,int target){
int left=0;
int right=nums.size()-1;
while(left<=right){
int  mid=left+(right-left)<<1;
if(nums[mid]==target){
return mid;
}
else if(nums[mid]>target){
right=mid-1;
}
else{
left=mid+1;

}





}

return -1;//没有找到
}

/*
最大值最小化：
若数组的某一侧都满足一定条件，而另一侧不满足，
那么我们就可以通过二分来找到满足条件的最大值或者最小值。

这就是二分答案：最大值的最小化，或者最小值的最大化。
一般有三个条件：1.答案在固定区间内
2.可行解对于区间是有单调性的，x满足,那么x的某一侧也都满足
3.对于某一个值x，能比较容易地判断它是否满足条件。









*/