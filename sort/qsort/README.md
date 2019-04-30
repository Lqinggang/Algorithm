## 快速排序  
### 1.时间复杂度  
&nbsp; &nbsp;O(nlogn)
### 2.基本思想  
&nbsp; &nbsp;1).以一个数作为基准(这里以数组的array[begin]作为基准)，将比它大(降序)或小(升序)的数  
移动到数组前/后面部分(myqsort.c:24-42),使数组以基准分成两部分:基准前比它大(小)，基准之后比它小(大);
&nbsp; &nbsp;2).将分成的两部分再次使用快排进行排序(myqsort.c:44-45)
### 3.排序过程  
![qsort](https://github.com/Lqinggang/Algorithm/blob/master/sort/qsort/qsort1.png?raw=true)
![qsort](https://github.com/Lqinggang/Algorithm/blob/master/sort/qsort/qsort2.png?raw=true)

