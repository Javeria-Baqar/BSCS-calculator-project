#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact =fact * i;
    }
    return fact;
}

int main() {
    int choice;
    float num1, num2, result;

    printf("Scientific Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Exponentiation\n");
    printf("7. Logarithm\n");
    printf("8. Square of a number\n");
    printf("9. Cube of a number\n");
    printf("10. Cube Root of a number\n");
    printf("11. Factorial of a number\n");
    printf("12. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2!= 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = sqrt(num1);
                printf("Result: %.2f\n", result);
                break;

            case 6:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = log(num1);
                printf("Result: %f\n", result);
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = num1 * num1;
                printf("Result: %.2f\n", result);
                break;

            case 9:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = num1 * num1 * num1;
                printf("Result: %.2f\n", result);
                break;

            case 10:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = cbrt(num1);
                printf("Result: %.2f\n", result);
                break;

            case 11:
                printf("Enter a number: ");
                int n;
                scanf("%d", &n);
                if(n < 0) {
                    printf("Error: Factorial of negative numbers is not defined!\n");
                } else {
                    int result = factorial(n);
                    printf("Result: %d\n", result);
                }
                break;

            case 12:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Try again!\n");
        }
    }

    return 0;
}

