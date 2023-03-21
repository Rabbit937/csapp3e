#include <limits.h>
#include <stdio.h>
int main()
{
    int x1 = INT_MIN;
    printf("case1: x=%d, x*2=%d\n", x1, x1 * 2);

    unsigned ux = 5;
    printf("case2: ux > -1: %d\n", ux > -1);

    return 0;
}

