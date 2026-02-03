#include <stdio.h>

void sum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}

int main(void)
{
    printf("Hello, World!\n");
    sum(5, 3);
    return 0;
}