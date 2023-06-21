#include <stdio.h>

int main()
{
    // Declaration.
    // int (32bit, 4 Byte)
    int my_age;

    // Init.
    my_age = 28;

    // int (32bit, 4 Byte)
    /* The U suffix appended to the numeric literal 28 indicates that it should be treated as an unsigned integer.
    Although it is not required in this specific case because 28 can be represented by both signed and unsigned
    integers without any issue, explicitly using the U suffix clarifies the intention of using an unsigned value*/
    unsigned int my_age2 = 28U;

    // floating point number
    // float (32 bit / 4 Byte)
    float my_balance1 = 1750.30F;

    // double (64 bit / 8 Byte)
    double my_balance2 = 1750.30;

    return 0;
}
