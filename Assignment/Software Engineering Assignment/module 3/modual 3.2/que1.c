/*WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)*/
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
        {
            result = num1 + num2;
            printf("Result=:%d",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result=:%d",result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result=:%d",result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
                printf("Result=:%lf",result);
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0) {
                printf("Error! Modulo by zero is not allowed.\n");
                printf("Result=:%d",result);
                return 1; // Exit with an error code
            }
           /*  printf("Result =:%lf",result); */
        }
    }

}

