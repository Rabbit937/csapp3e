/* trouble.c -- 误用=会导致无限循环 */
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit) ");
    status = scanf("%ld", &num);
    while (status = 1)  // 无限循环
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);    // 输入q后，无限错误循环
    }

    printf("Those integers sum to %ld.\n", sum);

    return 0;
}