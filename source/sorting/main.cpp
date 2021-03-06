/*
 * @Author: yanxinhao
 * @Email: 1914607611xh@i.shu.edu.cn
 * @LastEditTime: 2020-11-13 21:33:21
 * @LastEditors: yanxinhao
 * @Description: 
 */
#include "sorting/input.h"
#include "sorting/output.h"
#include "sorting/sorting.h"
using namespace std;
int main()
{
    int A[20] = {0};

    show_array(A, 20);
    get_input(A, 20);
    cout << "input array :";
    show_array(A, 20);

    // bubblesort
    bubblesort(A, 20);
    cout << "bubblesort output  :";
    show_array(A, 20);

    // quicksort
    get_input(A, 20);
    cout << "input array :";
    show_array(A, 20);
    quicksort<int>(A, 0, 20);
    cout << "quick output  :";
    show_array(A, 20);
    return 0;
}