/* print2.c -- 更多printf()的特性 */
#include <stdio.h>
int main()
{
    unsigned int un = 3000000000; /* int为32位和short为16位的系统*/
    short end = 200;
    long big = 65537;
    long long verybig = 1234567890864999999999999992;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld ant not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig); /* 个人电脑结果long long和long一样*/

    return 0;
}
