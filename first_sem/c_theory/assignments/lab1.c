#include <stdio.h>

int main()
{
    int a, b;
    float x, y;
    double p, q;
    char c1, c2;

    // Integer
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nINTEGER OPERATIONS\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    // Float
    printf("\nEnter two float numbers: ");
    scanf("%f %f", &x, &y);

    printf("\nFLOAT OPERATIONS\n");
    printf("Addition = %.2f\n", x + y);
    printf("Subtraction = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division = %.2f\n", x / y);

    // Double
    printf("\nEnter two double numbers: ");
    scanf("%lf %lf", &p, &q);

    printf("\nDOUBLE OPERATIONS\n");
    printf("Addition = %.2lf\n", p + q);
    printf("Subtraction = %.2lf\n", p - q);
    printf("Multiplication = %.2lf\n", p * q);
    printf("Division = %.2lf\n", p / q);

    // Character
    printf("\nEnter two characters: ");
    scanf(" %c %c", &c1, &c2);

    printf("\nCHARACTER OPERATIONS\n");
    printf("Addition = %d\n", c1 + c2);
    printf("Subtraction = %d\n", c1 - c2);
    printf("Multiplication = %d\n", c1 * c2);

    return 0;
}