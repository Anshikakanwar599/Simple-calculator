
#include <stdio.h>

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for division
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2, result;
    char operator;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
        case '+':
            result = add(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            else
            {
                result = divide(num1, num2);
                printf("Result = %.2f\n", result);
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
