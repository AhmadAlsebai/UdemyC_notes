#include <stdio.h>

int main()
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user that done by scanf function
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values to the console

    float a;
    float b;

    printf("Enter a value for a: ");
    scanf("%f", &a);
    printf("Enter a value for b: ");
    scanf("%f", &b);

    float perimeter = 2.0F *(a + b);
    float area = a * b;


    printf("Perimeter: %f\n", perimeter);
    printf("Area: %f\n", area);

    return 0;
}
// check this website https://en.cppreference.com/w/cpp/language/types for Range of values

// 3️⃣ To build the binary press ctrl+alt+b.
// 4️⃣ To run the binary press ctrl+alt+r.
// 5️⃣ To debug the binary press ctrl+alt+d.
