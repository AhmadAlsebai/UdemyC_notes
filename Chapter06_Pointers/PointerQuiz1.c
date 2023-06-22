#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a; //p_d == address memory of a
    int *p_e = &b; //p_d == address memory of b
    int *p_f = &c; //p_d == address memory of c

    //p_d == ((2*2))+(3*3) == 13 so it change the value of a to 13
    *p_d = 2 * (*p_e) + (3 * (*p_f));
    //p_d  same memory address of b, so the p_d change to be pointer of b
    p_d = &b;
    //p_f  same memory address of a, so the p_d change to be pointer of a
    p_f = &a;
    //p_e == 2 + 13 == 15 so it change the value of b to 15
    *p_e = *p_d + *p_f;

    // Check what the output is, without running this file!
    printf("%d\n", a);    // 13
    printf("%d\n", *p_d); // 15
    printf("%d\n", *p_e); // 15
    printf("%d\n", *p_f); // 13
    printf("%d\n", c);    // 3

    return 0;
}
