/* 输入年龄，显示改年龄对应的秒数 */
#include <stdio.h>
int main(void)
{
    int age;
    double second = 3.146E7;

    printf("Please input your age:\n");
    scanf("%d", &age);
    printf("show age with second:%f\n", age * second);
    return 0;
}