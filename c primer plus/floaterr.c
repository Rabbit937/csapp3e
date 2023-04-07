/* 给定一个数，加上1，再减去原来给定的数，结果是多少？你一定认为是1吧 */
/* floaterr.c -- 演示舍入错误 */
#include <stdio.h>
int main(void)
{
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);

    return 0;
}