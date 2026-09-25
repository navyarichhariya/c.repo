/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/


#include <stdio.h>

int main() {
    char op;
    int num1, num2;
    int result;

    scanf(" %c", &op); 

  
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d (integer division)\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case '%':
           
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! '%c' is not a valid operator.\n", op);
    }

    return 0;
}
