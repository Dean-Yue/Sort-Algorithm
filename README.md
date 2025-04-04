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
&nbsp; &nbsp;先分后合，分而治之的思想。比如有这样一个数组[46,25,38,1]，不断递归的分离它：分成[46,25];[38,1]-->[46];[25];[38];[1]。当分割到不可再分之后就开始做排序好的合并，[25，46]；[1,38];直到排序完成[1,25,38,46]。

优点是具有稳定性，以及保证了最差情况下的时间复杂度，缺点是不是原地排序，所以需要开辟一个额外的储存空间，大小和原来的arr相同是O（N）。

# Ⅴ、从荷兰国旗问题到Quick sort

## 荷兰国旗问题
给定一个数组，数组元素只包含三种颜色（可以用数字表示，比如 0, 1, 2），需要原地把数组排序成：

所有 0 在前

所有 1 在中

所有 2 在后

其实就是把荷兰国旗的三种颜色抽象成了0，1，2.

这个问题用三指针法可以很轻松的解决，我们定义三个指针：low=0，mid=0，high=n-1。low 指针：指向放 0 的位置；mid 指针：当前正在遍历的元素；high 指针：指向下一个放 2 的位置。

然后遍历一遍数组

如果 arr[mid] == 0，交换 arr[low] 和 arr[mid]，low++，mid++

如果 arr[mid] == 1，mid++

如果 arr[mid] == 2，交换 arr[mid] 和 arr[high]，high--，但 mid 不动

## Quick sort
快速排序的思想就是由此启发而来，选择一个“基准”（pivot），把小于，等于，大于pivot的数分为三部分即可。

# Ⅵ、Heap sort


