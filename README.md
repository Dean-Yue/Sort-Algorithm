# Sort-Algorithm
学习完几个排序算法之后的一些总结和思考。
# Ⅰ、Selection Sort
&nbsp; &nbsp; 选择排序是最符合直觉的排序，在一个数组中找到最小的元素把他放在第一位，这样第一位就是最小的元素了，之后遍历剩余部分，不断的寻找最小，然后把他放在数组的头部。

伪代码：

for（i=0;i<size-1;i++）

min=i

for(j=i+1;j<size-1;j++)

if n[j]<n[min]

min=j

swap n[i] and n[min]

&nbsp; &nbsp; 缺点也很明显，首先在交换的过程中已经失去了稳定性，其次是每次都在比较，比较后得到的信息浪费掉了，造成了时间复杂度O（n^2）的浪费，不过在空间上表现还是很优异的。

&nbsp; &nbsp; 整体来说是基于比较排序的基础，很适合入门。

排序过程：[1,__0__,3,0,4,2,5,3,0,8]->[0,1,3,__0__,4,2,5,3,0,8]->[0,0,3,1,4,2,5,3,__0__,8]->[0,0,0,1,4,2,5,3,3,8]直到排序完成。

# Ⅱ、Bubble Sort
&nbsp; &nbsp;冒泡排序是相邻数之间两两比较，最大的数字就像是一个泡泡一样被冒到数组的最右端了，这样我们就确定了数组的最右位置是最大的，然后循环n次就能得到结果，如果在一次循环过程中，发现没有进行任何交换，此时就可以认为已经排序完成，可以提前退出。

伪代码：

for(i=0;i<size-1;i++)

for(j=0;j<n-i-1;j++)

if(n[j]>n[j+1])

swap n[j] and n[j+1]

&nbsp; &nbsp;由于提前退出和交换次数的减少，冒泡排序在常数项的时间复杂度上相比于选择排序有一些优化。同时也不会失去稳定性，可由于比较到的信息还是浪费了，所以时间复杂度依然较高。

排序过程：[1,0,3,0,4,2,5,3,0,8]->[0,1,3,0,4,2,5,3,0,8]->[0,1,0,3,4,2,5,3,0,8]->[0,1,0,3,2,4,5,3,0,8]直到排序完成。

# Ⅲ、Insertion Sort 
&nbsp; &nbsp;插入排序的就是直接把每个数放到他应该在的位置上面去，假设n[0]已经排好，比较n[0]和n[1]，如果第n[1]比较小，那就将n[0]的值右移动一位，n[1]的值赋给n[0]。循环即可。

伪代码:
for(i=1;i<size-1;i++)

current=n[i]

j=i-1

while(j>=0 &&n[j]>current)

{n[j+1]=n[j]

j--}

n[j+1]=current

&nbsp; &nbsp;同样的，时间复杂度是O（n^2）;好处是交换的时候不会导致不稳定。

# 空间换时间，从O（N^2）到O（NlogN）

# Ⅳ、Merge Sort
&nbsp; &nbsp;先分后合，分而治之的思想。比如有这样一个数组[]


.....编写中


