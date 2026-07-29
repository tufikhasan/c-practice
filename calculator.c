#include <stdio.h>

int main()
{
    int choice, a, b;

    printf("===== Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (choice)
    {
    case 1:
        printf("Answer = %d\n", a + b);
        break;

    case 2:
        printf("Answer = %d\n", a - b);
        break;

    case 3:
        printf("Answer = %d\n", a * b);
        break;

    case 4:
        printf("Answer = %.2f\n", (float)a / b);
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}