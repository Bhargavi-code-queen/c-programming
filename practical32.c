#include <stdio.h>
#include <math.h>

int main() {
    double number, result;
    int power;

    // Input a number for square root calculation
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &number);

    // Calculate the square root
    result = sqrt(number);
    printf("Square root of %.2f is %.2f\n", number, result);

    // Input a number and power for power calculation
    printf("Enter a number to calculate its power: ");
    scanf("%lf", &number);
    printf("Enter the power: ");
    scanf("%d", &power);

    // Calculate the power
    result = pow(number, power);
    printf("%.2f raised to the power of %d is %.2f\n", number, power, result);

    return 0;
}
