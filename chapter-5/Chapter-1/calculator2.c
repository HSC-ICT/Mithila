#include <stdio.h>
int main(){

    double num1, num2, sum, sub, mul, div, rem;

    printf("Please enter two number : ");
    scanf("%lf%lf", &num1, &num2);

    // calculation
    // for summation
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);

    // for subtraction
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);

    // multiplication
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);

    // division
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);

    // remainder
    // printf("%.2lf mod %.2lf = %.2lf\n", num1, num2, num1 % num2);

    return 0;
}
