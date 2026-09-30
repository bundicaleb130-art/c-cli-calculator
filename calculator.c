#include <stdio.h>
#include <math.h>

/* Basic operations */

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

/* Scientific operations */

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

int main() {
    int choice;
    double num1, num2;

    while (1) {

        printf("\n========== C SCIENTIFIC CALCULATOR ==========\n");
        printf("1.  Add\n");
        printf("2.  Subtract\n");
        printf("3.  Multiply\n");
        printf("4.  Divide\n");
        printf("5.  Factorial (n!)\n");
        printf("6.  Sine (sin)\n");
        printf("7.  Cosine (cos)\n");
        printf("8.  Tangent (tan)\n");
        printf("9.  Square (x^2)\n");
        printf("10. Square Root (sqrt)\n");
        printf("11. Cube (x^3)\n");
        printf("12. Cube Root (cbrt)\n");
        printf("13. Exit\n");
        printf("=============================================\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 13) {
            printf("Goodbye!\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter first number: ");
                scanf("%lf", &num1);

                printf("Enter second number: ");
                scanf("%lf", &num2);

                printf("Result: %.2f\n", add(num1, num2));
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%lf", &num1);

                printf("Enter second number: ");
                scanf("%lf", &num2);

                printf("Result: %.2f\n", subtract(num1, num2));
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%lf", &num1);

                printf("Enter second number: ");
                scanf("%lf", &num2);

                printf("Result: %.2f\n", multiply(num1, num2));
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%lf", &num1);

                printf("Enter second number: ");
                scanf("%lf", &num2);

                if (num2 == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    printf("Result: %.2f\n", divide(num1, num2));
                }
                break;

            case 5: {
                int n;

                printf("Enter a non-negative integer: ");
                scanf("%d", &n);

                if (n < 0) {
                    printf("Error: Factorial is not defined for negative numbers.\n");
                } else if (n > 20) {
                    printf("Error: Maximum supported factorial is 20!.\n");
                } else {
                    printf("%d! = %llu\n", n, factorial(n));
                }

                break;
            }

            case 6:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);

                printf("sin(%.2f) = %.6f\n",
                       num1,
                       sin(degrees_to_radians(num1)));
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);

                printf("cos(%.2f) = %.6f\n",
                       num1,
                       cos(degrees_to_radians(num1)));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);

                printf("tan(%.2f) = %.6f\n",
                       num1,
                       tan(degrees_to_radians(num1)));
                break;

            case 9:
                printf("Enter number: ");
                scanf("%lf", &num1);

                printf("%.2f² = %.2f\n",
                       num1,
                       num1 * num1);
                break;

            case 10:
                printf("Enter number: ");
                scanf("%lf", &num1);

                if (num1 < 0) {
                    printf("Error: Cannot calculate square root of a negative number.\n");
                } else {
                    printf("sqrt(%.2f) = %.6f\n",
                           num1,
                           sqrt(num1));
                }

                break;

            case 11:
                printf("Enter number: ");
                scanf("%lf", &num1);

                printf("%.2f³ = %.2f\n",
                       num1,
                       num1 * num1 * num1);
                break;

            case 12:
                printf("Enter number: ");
                scanf("%lf", &num1);

                printf("cbrt(%.2f) = %.6f\n",
                       num1,
                       cbrt(num1));
                break;

            default:
                printf("Invalid option. Please choose 1-13.\n");
        }
    }

    return 0;
}
