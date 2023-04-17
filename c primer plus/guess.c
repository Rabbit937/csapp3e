/* guess.c -- 一个拖拉且错误的猜数字程序 */
#include <stdio.h>
int main(void)
{
    char response;
    int guess = 1;

    printf("Pick an integer from 1 to 100.I will try to guess ");
    printf("it.\n Respond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    // 每次打印两次
    // while (getchar() != 'y')
    // printf("Well, then, is it %d?\n", ++guess);

    // while (getchar() != 'y')
    // {
    //     printf("Well, then, is it %d?\n", ++guess);
    //     while (getchar() != '\n')
    //         continue;
    // }

    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
        {
            printf("Well, then, is it %d?\n", ++guess);
        }
        else
        {
            printf("Sorry, I understand only y or n.\n");
        }

        while (getchar() != '\n')
        {
            continue;
        }
    }

    printf("I knew I could do it!\n");

    return 0;
}