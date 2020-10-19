<!--
 * @Author: yanxinhao
 * @Email: 1914607611xh@i.shu.edu.cn
 * @LastEditTime: 2020-10-19 16:29:32
 * @LastEditors: yanxinhao
 * @Description: 
-->
# 数据结构与算法
有个重要的事情就是把拷贝构造和等号的操作符重载好好看一下

- [数据结构与算法](#数据结构与算法)
  - [数据结构](#数据结构)
    - [介绍](#介绍)
    - [数据结构基础](#数据结构基础)
    - [线性表](#线性表)
      - [向量：](#向量)
      - [链表：](#链表)
        - [链式存储结构：](#链式存储结构)
    - [栈与队列](#栈与队列)
      - [顺序栈](#顺序栈)
      - [链式栈](#链式栈)
      - [栈的应用](#栈的应用)
    - [堆与优先队列](#堆与优先队列)
      - [堆(Heap)](#堆heap)
      - [Steap](#steap)
      - [Queap](#queap)
      - [应用](#应用)
    - [哈希表](#哈希表)
      - [hash实例应用](#hash实例应用)
    - [树](#树)
      - [树的表示](#树的表示)
      - [二叉树](#二叉树)
      - [二叉树的一些性质：](#二叉树的一些性质)
        - [二叉树的表示](#二叉树的表示)
      - [遍历二叉树](#遍历二叉树)
        - [线索二叉树](#线索二叉树)
      - [二叉树的重构](#二叉树的重构)
      - [树和森林与二叉树的相互转换](#树和森林与二叉树的相互转换)
      - [树的算法实例](#树的算法实例)
    - [并查集](#并查集)
    - [图](#图)
      - [图的性质](#图的性质)
      - [特殊图的类型](#特殊图的类型)
      - [图的存储结构](#图的存储结构)
      - [图的算法实例](#图的算法实例)
  - [算法基础](#算法基础)
    - [算法分析基础](#算法分析基础)
      - [时间复杂度](#时间复杂度)
    - [迭代与递归](#迭代与递归)
      - [迭代算法实例](#迭代算法实例)
      - [减而治之（Decrease and conquer）](#减而治之decrease-and-conquer)
        - [减而治之的实例：](#减而治之的实例)
      - [分而治之（Divide and conquer）](#分而治之divide-and-conquer)
        - [分而治之的实例：](#分而治之的实例)
      - [递归消除：尾递归](#递归消除尾递归)
    - [动态规划](#动态规划)
    - [贪心法](#贪心法)
  - [算法实战](#算法实战)
    - [排序](#排序)
    - [字符串匹配](#字符串匹配)

## 数据结构

### 介绍

### 数据结构基础

<div align="center"> 
  <img src="./imgs/Abstract_data.png" width=70% height=70% /> 
</div>

### 线性表
#### 向量：
（线性表的顺序存储结构）

#### 链表： 
##### 链式存储结构：
  - 单链表
  - 循环链表
  - 双向链表

### 栈与队列
#### 顺序栈

#### 链式栈

#### 栈的应用
  - 逆序输出 : 进制转换
  - 递归嵌套 : 函数调用,括号匹配
  - 栈混洗 : 等价于n对括号的匹配
  - 延迟缓冲 : 中缀表达式求值
  - 逆波兰表达式（后缀表达式）求值与转换算法

### 堆与优先队列
#### 堆(Heap)
#### Steap 
> Steap = Stack + Heap = push + pop + getmax
#### Queap
> Queap = Queue + Heap = enqueue + dequeue + getMax

#### 应用
  - 试探回溯法 : n皇后问题与迷宫寻径问题

### 哈希表

#### hash实例应用
  - 桶排序

### 树
#### 树的表示
  - 父节点表示 : 对孩子节点和兄弟节点的访问不方便，均要遍历整个树
  - 孩子节点表示 : 找父节点和兄弟节点很慢
  - 父节点+孩子节点表示 : 这里的孩子节点是第一个孩子节点的指针,当前节点的所有孩子节点连成一个链表。
  - 长子+兄弟表示 : 若在设parent的引用, 访问parent也仅需要O(1)时间

#### 二叉树
  二叉树:节点度数不超过2的树,同一节点的孩子和子树，均以左右区分(隐含有序)
#### 二叉树的一些性质：

> 设度数为0,1,2的节点各有n0,n1,n2个,则：
1. 节点数 : n = n0+n1+n2
2. 边数 : e = n-1 = n1+2*n2 (节点数减一 or 所有的出度数)
3. 叶节点数 : n0 = n2+1 (由上面2的等式后两项相等可以推出)
   
> 高度(或者深度)为k的二叉树,则:
1. 整个数最多可能有的节点数 : 2^k - 1 
2. 二叉树的第i层最多可能的节点数 : 2^(i-1)
   
> 有n个节点的完全二叉树,若i是某个节点a的编号(编号的范围为1~n)
1. 若i!=1,则a的双亲节点编号为 : ⌊i/2⌋ 
2. 若2i<=n,a的左孩子编号为 : 2i
3. 若2i>n : a无左孩子
4. 若2i+1<=n,a的右孩子的编号为 : 2i+1
5. 若2i+1>n : a无右孩子
6. 完全二叉树的高度为 : ⌊logn⌋+1 或者⌈log(n+1)⌉（底数为二）(有2^(h-1) <= n < 2^h推得)

   

##### 二叉树的表示
- 顺序存储结构 : 用一维数组，最适合完全二叉树
- 链式存储结构 : 每个节点包含一个数据域和指向两个孩子的指针域

#### 遍历二叉树
  - 先序遍历
  - 中序遍历
  - 后序遍历
  - 层次遍历
  
##### 线索二叉树

#### 二叉树的重构

#### 树和森林与二叉树的相互转换

#### 树的算法实例
  - ##### 二叉排序树（又称二叉搜索树）
  - ##### 平衡二叉树（包含AVL）
  - ##### 哈夫曼（Huffman）树和哈夫曼编码
  - ##### 并查集 




### 并查集

### 图
#### 图的性质
- 支撑树(spanning tree) 
- 最小支撑树(MST)
  
#### 特殊图的类型
- 有向无环图(DAG)
  
#### 图的存储结构
  - 邻接矩阵 :
    - 空间复杂度 O(n^2)空间,与边数无关，适合稠密图
  - 邻接表
  - 十字链表 : 有向图
  - 邻接多重表 : 无向图

#### 图的算法实例
  - ##### 图的遍历：深度优先搜索与广度优先搜索

  边分类:
  <table>
    <tr>
  <td>BFS : 队列</td>
  <td>DFS : 栈</td>
  </tr>
    <tr>
  <td><img src="./imgs/bfs_edge.png"></td>
  <td><img src="./imgs/dfs_edge.png"></td>
  </tr></table>
  - ##### 优先级搜索 

  - ##### 最小生成(支撑)树 (MST)
  
    - Prim
    - Kruskal
  - ##### 最短路径 (SPT)
  > 注意 MST!=SPT 两者的优化方向并不一样
    - Dijkstral
    - Floid-Warshall  
  - ##### 关键路径(AOE)
  - ##### 拓扑排序(AOV)

## 算法基础
### 算法分析基础

#### 时间复杂度
> 复杂度类P即为所有可以由一个确定型图灵机在多项式表达的时间内解决的问题；类NP由所有可以在多项式时间内验证它的解是否正确的决定问题组成，或者等效的说，那些可以在非确定型图灵机上在多项式时间内找出解的问题的集合。很可能，计算理论最大的未解决问题就是关于这两类的关系的：P和NP相等?
- ##### 渐进分析
  <table>
  <tr>
  <td><img src="./imgs/big_O.png"></td>
  <td><img src="./imgs/symbols.png"></td>
  </tr></table>
  
- ##### 复杂度层次
  <table><tr>
  <td><img src="./imgs/growth_speed.png"></td>
  <td><img src="./imgs/complexity.png"></td>
  </tr></table>
- ##### 复杂度分析的主要方法：
  1. **迭代**：级数求和
  2. **递归**：递归跟踪 + 递推方程
  3. 猜测 + 验证


### 迭代与递归
迭代算法一般较为常见，递归算法更为直观。因为递归算法需要大量空间资源，所以经常需要将其改写成迭代算法，这里为体现算法的思想，我主要考虑以递归为出发点的思想来理解算法。
#### 迭代算法实例
  - 数组求和
  - 数组最大值
  
以下为递归算法的两种主要思想：
#### 减而治之（Decrease and conquer）

<div align="center"> 
  <img src="./imgs/Decrease_and_conquer.png" width=70% height=70% /> 
</div>

##### 减而治之的实例：
  - 数组求和：线性递归
  - 数组倒置
#### 分而治之（Divide and conquer）

<div align="center"> 
  <img src="./imgs/Divide_and_conquer.png" width=70% height=70% /> 
</div>

##### 分而治之的实例：
  - 数组求和：二分递归
  - 数组的最大值

#### 递归消除：尾递归

<div align="center"> 
  <img src="./imgs/tail_recursive.png" width=70% height=70% /> 
</div>

### 动态规划

| 数据结构 | 问题名称 | 问题描述                                           |
| :------: | :------: | :------------------------------------------------- |
|   数组   |   Max2   | 从数组区间A[lo,hi)中找出最大的两个整数A[x1]和A[x2] |
|    串    |   LCS    | 求两个子序列的最长公共子序列                       |

### 贪心法 

## 算法实战

### 排序

简介：

| 算法名称 | 问题描述 | 算法描述 | 时间复杂度 |
| :------: | :------- | :------- | :--------- |
| 冒泡排序 | n        | n        | n          |
| 插入排序 | n        | n        | n          |
| 选择排序 | n        | n        | n          |
| 快速排序 | n        | n        | n          |
|  堆排序  | n        | n        | n          |
| 归并排序 | n        | n        | n          |
| 基数排序 | n        | n        | n          |

算法分析：
  <table>
      <tr>
      <td>算法描述</td>
      <td>算法分析</td>
    </tr>
    <tr>
      <td><img src="./imgs/bubblesort.png"></td>
      <td><img src="./imgs/bubblesort_complexity.png"></td>
    </tr>

  </table>

### 字符串匹配
| 算法名称 | 问题描述       | 算法描述 | 时间复杂度 |
| :------: | :------------- | :------- | :--------- |
|   LCS    | 最长公共子序列 | n        | n          |
|   KMP    | 字符串模式匹配 | n        | n          |

