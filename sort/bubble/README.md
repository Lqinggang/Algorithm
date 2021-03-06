## 冒泡排序  

### 1.时间复杂度  
&nbsp;&nbsp;1)平均复杂度：O(n^2)  
&nbsp;&nbsp;2)最外情况(对已经排好序的数组倒序)：O(n^2)   
&nbsp;&nbsp;3)最好情况(已经按要求排好序)：O(n)   

### 2.基本思想   
&nbsp;&nbsp;对数组两个相邻元素之间(下标：0和1，1和2，2和3...)进行比较后进行交换(如果需要的话)  

### 3.实现说明 
&nbsp;&nbsp;1)使用两个循环对数组进行比较，第一个循环控制循环次数，第二个循环控制两个
相邻元素之间比较，将大(小)的元素向后冒泡，使数组后部分已经排好序   
&nbsp； &nbsp；2)假设对数组array[] = { 2, 5, 3 } 按从大到小排序，则排序情况和比较情况为：
![bubble](https：//github.com/Lqinggang/Algorithm/blob/master/sort/bubble/bubble.png?raw=true)

### 4.最好情况说明  
&nbsp;&nbsp;假设对按要求排好序的数组array[] = { 1, 2, 3, 4, 5 } 从小到大排序，则第一次排序时，
两个相邻元素之间进行比较：1和2比：没有交换，2和3比：没有交换，...，4和5比，没有交换；从没有交换
可以知道：1(即array[0])肯定比2小(即array[1])(否则，它们会被交换)，而2(即array[1])比3(即array[2])
小， ...， 4(即array[3])比5(即array[4])小，综上array[0] < array[1] < array[2] < array[3] < array[4]
即已经排好序，可以结束循环，此时只进行了一遍for循环，时间复杂度为O(n)
