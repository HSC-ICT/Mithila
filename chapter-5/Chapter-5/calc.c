#include<stdio.h>

int calcSum(int num1, int num2)
{
    return num1 + num2;
}
int calcSub(int num1, int num2)
{
    return num1 - num2;
}
int calcProduct(int num1, int num2)
{
    return num1 * num2;
}
int calcDiv(int num1, int num2)
{
    return num1 / num2;
}
int calcRem(int num1, int num2)
{
    return num1 % num2;
}


int main()
{
    int num1, num2, sum, sub, product, div, rem;

    printf("Enter two integer number : ");
    scanf("%d%d", &num1, &num2);

    sum = calcSum(num1, num2);
    sub = calcSub(num1, num2);
    product = calcProduct(num1, num2);
    div = calcDiv(num1, num2);
    rem = calcRem(num1, num2);

    printf("Sum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Product = %d\n", product);
    printf("Div = %d\n", div);
    printf("Rem = %d\n", rem);

    return 0;
}