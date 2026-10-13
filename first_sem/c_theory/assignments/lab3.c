#include <stdio.h>

int main()
{
    int choice;
    int a, b;
    do
    { 

    printf("----- MENU-DRIVEN CALCULATOR -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Addition = %d\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Subtraction = %d\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Multiplication = %d\n", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Division = %.2f\n", (float)a / b);
            break;

        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            printf("Modulus = %d\n", a % b);
            break;

        default:
            printf("Invalid choice.\n");
    }
    }while(choice!=6);

    return 0;
}