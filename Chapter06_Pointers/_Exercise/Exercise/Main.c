#include <stdio.h>
void binom(int a, int b, int *p_c)
{
    *p_c = a * a + 2 * a * b + b * b;
}
int main()
{
    int a = 4;
    int b = 3;
    int c = 0;
    int *p_c = &c;

    printf("a=%d, b=%d\n", a, b);
    printf("Call binom function!\n");
    binom(a, b, p_c);
    printf("c=%d\n", c);

    return 0;
}
