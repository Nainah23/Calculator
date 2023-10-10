#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter operator: ");
    getchar();  // Consume the newline character from the previous input
    op = getchar();

    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        printf("%f", num1 + num2);
    } else if (op == '-') {
        printf("%f", num1 - num2);
    } else if (op == '/') {
        if (num2 != 0)
            printf("%f", num1 / num2);
        else
            printf("Error: Division by zero");
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else {
        printf("Invalid Operator");
    }

    return 0;
}