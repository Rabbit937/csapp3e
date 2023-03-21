#include <stdio.h>
#include <stddef.h>
#include <assert.h>

#define DEMO_3

#ifdef DEMO_2
// 观察字节序的一个简单例子
typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
    {
        printf("%p\t0x%.2x\n", start + i, start[i]);
    }
}

int main()
{
    int a = 0x01234567;
    show_bytes((pointer)&a, sizeof(int));
}

#endif

#ifdef DEMO_3
int main()
{
    assert(+0. == -0.);
    assert(1.0 / +0. == 1.0 / -0.);
    return 0;
}
#endif
