#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
    char cont;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        printf("Choose operation (+, -, *, /): ");
        scanf(" %c", &op);

        switch (op) 
        {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid operation!\n");
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y'|| cont == 'Y');

    return 0;
}


