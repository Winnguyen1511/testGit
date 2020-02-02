#include <stdio.h>
#include <stdlib.h>

int add(int a)
{
    return a + 2;
}
int func(void* arg)
{
    int tmp =*((int*)arg);
    *(int*)arg = *(int*)arg +1;
    return add(tmp);
}


int main(void)
{
    int a = 7;
    void*b = &a;
    int ret = func(&a);
    printf("%d\n", ret);
    printf("%d", a);
    return 0;
}