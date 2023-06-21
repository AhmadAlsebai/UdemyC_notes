#include <stdio.h>

int main()
{
    unsigned int entererd_number;
    printf("Please enter the radius: ");
    scanf("%u", &entererd_number);

    int Remainder = entererd_number%3;

    if (Remainder == 0) {
        printf("The number is divisible by 3\n");
    } else {
        printf("The number is not divisible by 3\n");
    }

    printf("the remainder is %d\n", Remainder);


    return 0;
}
