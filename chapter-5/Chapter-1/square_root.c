#include<stdio.h>
#include<math.h>

int main()
{
    double value, result;

    printf("Enter Decimal value: ");
    scanf("%lf", &value);

    result = sqrt(value);

    printf("Square Root is = %.2lf\n", result);

    return 0;
}