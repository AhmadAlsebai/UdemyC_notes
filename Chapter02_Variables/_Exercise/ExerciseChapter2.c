#include <stdio.h>
#include <stdint.h>

int main()
{
    unsigned int age;
    uint64_t days, hours, minutes, seconds;


    printf("Please enter your age in years: ");
    scanf("%u", &age);

    days = age * 365ul;
    hours = days * 24ul;
    minutes = hours * 60ul;
    seconds = minutes * 60ul;

    // printing the value of days, hours, minutes, seconds
    printf("You are living since %llu days\n", days);
    printf("You are living since %llu hours\n", hours);
    printf("You are living since %llu minutes\n", minutes);
    printf("You are living since %llu seconds\n", seconds);

    return 0;
}
