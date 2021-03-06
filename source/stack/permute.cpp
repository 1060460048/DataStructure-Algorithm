/*
 * @Author: yanxinhao
 * @Email: 1914607611xh@i.shu.edu.cn
 * @LastEditTime: 2020-12-08 20:34:04
 * @LastEditors: yanxinhao
 * @Description: 
 */

#include <iostream>
using namespace std;
/**
 * @brief n-i个元素的全排列
 * 
 * @param data 
 * @param i 
 * @param n 
 */
void permute(string data, int i, int n)
{
    if (i == n - 1) //递归基，输出一个排列
    {
        for (int j = 0; j <= n; j++)
        {
            cout << data[j];
        }
        cout << endl;
    }
    else
    {

        for (int j = i; j < n; j++)
        {
            swap(data[i], data[j]); //将被选中的元素放在i个位置
            permute(data, i + 1, n);
            swap(data[j], data[i]); //换回来恢复后进入下一次迭代选取另一个元素放在i位置
        }
    }
};