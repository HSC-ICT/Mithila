#include <stdio.h>
int main(){

    double num1, num2, sum, sub, mul, div, rem, result;

    printf("Please enter two number : ");
    scanf("%lf%lf", &num1, &num2);

    // calculation
    // for summation
    result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);

    // for subtraction
    result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);

    // multiplication
    result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);

    // division
    result = num1 / num1;
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);

    // remainder
    // result = num1 % num2;
    // printf("%.2lf % %.2lf = %.2lf\n", num1, num2, result);

    return 0;
}
