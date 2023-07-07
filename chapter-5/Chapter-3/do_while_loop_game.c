#include<stdio.h>
int main()
{
    double number, sum = 0;

    do{
        printf("Enter a number: ");
        scanf("%lf", &number);

        sum += number;
    }while(number != 0.0);

    // 0 == 0 --> true
    // 0 != 0 --> false

    printf("End of loop\n");
    printf("Sum = %.2lf\n", sum);

    return 0;
}