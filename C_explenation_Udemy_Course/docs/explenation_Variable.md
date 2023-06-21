# number Variables in C

In C, there are several variable types that you can use to store different kinds of data. such as:

1. **int:** The int type is used to store whole numbers (integers) without fractional parts. It can represent both positive and negative numbers. The size of an int depends on the compiler and the platform, but it is typically 4 bytes (32 bits).

2. **unsigned int:** The int type is used to store whole numbers (integers) without fractional parts. It can represent both positive and negative numbers. The size of an int depends on the compiler and the platform, but it is typically 4 bytes (32 bits).

3. **float**: The float type is used to store floating-point numbers with single precision. It can represent real numbers with fractional parts. The size of a float is typically 4 bytes (32 bits).

3. **double**: The double type is used to store floating-point numbers with double precision. It can represent real numbers with higher precision compared to float. The size of a double is typically 8 bytes (64 bits). 

3. **char**: The char type is used to store individual characters. It can hold any single character from the character set (such as letters, digits, and symbols) and special characters like '\n' or '\t'. The size of a char is typically 1 byte.

``` c
#include <stdio.h>

int main() {
    int numInt = 10;
    unsigned int numUnsignedInt = 20;
    float numFloat = 3.14;
    double numDouble = 1.23456789;
    char ch = 'A';

    printf("Integer: %d\n", numInt);
    printf("Unsigned Integer: %u\n", numUnsignedInt);
    printf("Float: %f\n", numFloat);
    printf("Double: %lf\n", numDouble);
    printf("Character: %c\n", ch);

    return 0;
}
```

In C programming, the suffixes 'U' and 'F' are used to indicate the type of a numeric literal. Here's what they mean:

**U (unsigned):**
The 'U' suffix is used to specify an unsigned integer literal. It tells the compiler that the value should be treated as an unsigned integer.

**F (float):**
The 'F' suffix is used to specify a floating-point literal of type float. It indicates that the value should be treated as a float instead of the default double precision.
Here, the 'F' suffix is added to the numeric literal '1750.30' to explicitly specify that it should be treated as a float. This can be useful when assigning a value to a float variable or when working with float-specific operations.

It's important to note that using these suffixes is not always necessary. In many cases, the C compiler can infer the type based on the context or default rules. However, adding these suffixes can be beneficial to explicitly specify the intended type or when dealing with specific requirements or data types.
