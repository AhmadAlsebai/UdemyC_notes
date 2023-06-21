# Exercise

Hallo Leute!

Willkommen bei der ersten Programmier-Übung in diesem Kurs.

## Aufgaben der Programmierübung

- Lese das Alter des Benutzers in der Konsole ein (Positive ganze Zahl).
- 
- Berechne wie viele Tage, Stunden, Minuten und Sekunden er bereits lebt (auf die Anzahl ganzer Jahre).
- Gebe die zuvor berechneten Werte in der Konsole aus.

## Beispiel

Das heißt wenn ich z.B. 26 als Alter eingebe, würde folgender Output generiert werden:

```terminal
Please enter your age in years: 26
You are living since 9490 days
You are living since 227760 hours
You are living since 13665600 minutes
You are living since 819936000 seconds
```

## solution
```c
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

    printf("You are living since %llu days\n", days);
    printf("You are living since %llu hours\n", hours);
    printf("You are living since %llu minutes\n", minutes);
    printf("You are living since %llu seconds\n", seconds);

    return 0;
}
```
`unsigned int` and `uint64_t` are both integer types, but they have some key differences in terms of their size and range.

1. Size:
   - `unsigned int`: The size of `unsigned int` can vary depending on the platform and compiler, but it is typically 4 bytes (32 bits) on most systems.
   - `uint64_t`: `uint64_t` is guaranteed to be 8 bytes (64 bits) on all platforms that support it. It is explicitly defined as a 64-bit unsigned integer type in the `<stdint.h>` header.

2. Range:
   - `unsigned int`: The range of values that can be represented by `unsigned int` is from 0 to `UINT_MAX`, where `UINT_MAX` is the maximum value that can be represented by an `unsigned int` on a particular system. It is typically 4,294,967,295 (2^32 - 1) on most systems.
   - `uint64_t`: The range of values that can be represented by `uint64_t` is from 0 to `UINT64_MAX`, where `UINT64_MAX` is the maximum value that can be represented by a `uint64_t`. It is 18,446,744,073,709,551,615 (2^64 - 1).

In summary, `unsigned int` is typically a 32-bit unsigned integer type with a range up to 4 billion, while `uint64_t` is a specifically defined 64-bit unsigned integer type with a much larger range up to 18 quintillion. The choice between them depends on the specific requirements of your program, including the expected range of values and the desired memory usage.
